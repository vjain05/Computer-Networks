
generic module NeighborListC( int n){
	provides interface NeighborList;
	uses interface RoutingTable as RT;
}

implementation{
	uint16_t MAX_SIZE = n;	

	pair container[n];
	uint16_t size = 0;

	command uint16_t NeighborList.getRTsize(){ 
		return (call RT.getSize());
	}
	command void NeighborList.pushback(pair input){
		
		call RT.NeighborGotAdded(input.src);
		
		if(size < MAX_SIZE){
			container[size] = input;
			size++;
		}
		else{//this was added
			uint16_t i;
			for(i=0;i<size-1;i++){
				container[i]=container[i+1];
			}
			container[size-1]=input;	
		}
		//dbg("genDebug","exiting command")
	}
	command void NeighborList.set(uint16_t position, pair input){
		container[position]=input;
		}
	command void NeighborList.pushfront(pair input){
		if(size < MAX_SIZE){
			uint16_t i;
			for(i = size-1; i>=0; i--){
				container[i+1] = container[i];
			}

			container[0] = input;
			size++;
		}
	}

	command pair NeighborList.popback(){
		pair returnVal;
	
		returnVal = container[size];
		if(size > 0)size--;
		return returnVal;
	}
	command void NeighborList.clearAll(){
		size=0;
	}

	command pair NeighborList.popfront(){
		pair returnVal;
		uint16_t i;
		
		returnVal = container[0];
		if(size>0){
			for(i = 1; i<MAX_SIZE; i++){
				container[i] = container[i+1];
			}

			size--;
		}	
		
		return returnVal;
	}

	command pair NeighborList.front(){
		return container[0];
	}

	command pair NeighborList.back(){
		return container[size];
	}

	command bool NeighborList.isEmpty(){
		if(size == 0)
			return TRUE;
		else
			return FALSE;
	}

	command uint16_t NeighborList.size(){
		return size;
	}

	command pair NeighborList.get(uint16_t position){
		return container[position];
	}
	
	command void NeighborList.delete(uint16_t position){//position>0 and position<size-1
		uint16_t i=position+1;
		for(i;i<size;i++){
			container[i-1]=container[i];
		}
		size--;
	}
	command bool NeighborList.neighborsContains(uint8_t toFind){
		//dbg("genDebug","listContains is called\n");
   		if(size==0){
   			//dbg("genDebug","empty list\n");
   			return FALSE;
   		}else{
   			uint16_t i=0;
   			for(i;i<size;i++){
   					if(container[i].src==toFind){
   							return TRUE;
   						}
   				}
   				return FALSE;
   		}
	}
	command void NeighborList.printNeighbors(){
		uint16_t i=0;
   		dbg("Project2DV"," printing neighbors: ");
   		for(i=0;i<size;i++){
   			dbg_clear("Project2DV","[ %d, p %d ]",container[i].src,container[i].seq);
   			//dbg_clear("proj1N","[ %d],",(call neighbors.get(i)).src);
   		}
   		dbg_clear("Project2DV","\n");
	}
	command void NeighborList.decrementNeighborPing(){
		//pair two;
   		uint16_t i;   	
   		for(i=0;i<size;i++){
   			container[i].seq-=1;
   		}		
	}
	command void NeighborList.resetNeighborCounters(){
		uint16_t i=0;
   		for(i;i<size;i++){
   			container[i].seq=4;
   		}	
	}
	command void NeighborList.refreshNeighbors(){
		uint16_t i=0;
   		for(i;i<size;i++){
   			if(container[i].seq<=1){
   				call NeighborList.deleteNeighbor(container[i].src);
   				i--;	
   			}
   		}	
	}
	command void NeighborList.deleteNeighbor(uint8_t toDelete){
		uint16_t i=0;
   		bool deleted=FALSE;   		
   		for(i;i<size;i++){
   			if(container[i].src==toDelete){
   				call RT.NeighborGotDeleted(toDelete);//added dis
   				deleted=TRUE;
   				break;
   			}	
   		}
   		if(i<size-1 & deleted==TRUE){
   			call NeighborList.delete(i);
   		}		
   		else if(deleted==TRUE){
   			call NeighborList.popback();
   		}	
	}
	command void NeighborList.incrementANeighbor(uint8_t toIncr){
		uint16_t j=0;
        for(j;j<size;j++){
        	if(container[j].src==toIncr){
                container[j].seq+=1;
            }
        }
    
	}
	command void NeighborList.populateRoutingTable(){
		call RT.populateTable(container, size);
	}
	command void NeighborList.pushbackToRoutingTable(dvr element){
		call RT.pushback(element);
	}
	command void NeighborList.writeToPayloadFromRoutingTable(uint8_t* payld, uint8_t neighbor){
		call RT.writeToPayload(payld, neighbor);
	}
	command void NeighborList.updateRoutingTable(uint8_t* payld, uint8_t source){
		call RT.updateTable(payld, source);
	}
	
	command void NeighborList.printRoutingTable(){
		call RT.printTable();	
	}
	
	command uint8_t NeighborList.nextHopFromDest(uint8_t dest){
		return (call RT.nxtHopFrmDst(dest));	
	}
	
	command uint8_t NeighborList.costFromDest(uint8_t dest){
		return (call RT.cstFromDst(dest));	
	}
	command void NeighborList.refreshRoutingT(){
		call RT.refreshRoutingTable();	
	}
}
