generic module HistoryListC( int n){
	provides interface HistoryList;
}

implementation{
	uint16_t MAX_SIZE = n;	

	pair container[n];
	uint16_t size = 0;

	command void HistoryList.pushback(pair input){
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
	command void HistoryList.set(uint16_t position, pair input){
		container[position]=input;
		}
	command void HistoryList.pushfront(pair input){
		if(size < MAX_SIZE){
			uint16_t i;
			for(i = size-1; i>=0; i--){
				container[i+1] = container[i];
			}

			container[0] = input;
			size++;
		}
	}

	command pair HistoryList.popback(){
		pair returnVal;
	
		returnVal = container[size];
		if(size > 0)size--;
		return returnVal;
	}
	command void HistoryList.clearAll(){
		size=0;
	}

	command pair HistoryList.popfront(){
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

	command pair HistoryList.front(){
		return container[0];
	}

	command pair HistoryList.back(){
		return container[size];
	}

	command bool HistoryList.isEmpty(){
		if(size == 0)
			return TRUE;
		else
			return FALSE;
	}

	command uint16_t HistoryList.size(){
		return size;
	}

	command pair HistoryList.get(uint16_t position){
		return container[position];
	}
	
	command void HistoryList.delete(uint16_t position){//position>0 and position<size-1
		uint16_t i=position+1;
		for(i;i<size;i++){
			container[i-1]=container[i];
		}
		size--;
	}
	command bool HistoryList.listContains(pair * toFind){
		//dbg("genDebug","listContains is called\n");
   		if(size==0){
   			//dbg("genDebug","empty list\n");
   			return FALSE;
   		}else{
   			uint16_t i=0;
   			for(i;i<size;i++){
   					if(((container[i].src==toFind->src) & (container[i].seq==toFind->seq))){
   							return TRUE;
   						}
   				}
   				return FALSE;
   		}
	}
	command uint8_t HistoryList.incrementSeq(uint8_t src){
		uint8_t max;
   		uint16_t i;
   		bool sources;
   		sources=FALSE;
   		max=0;
   		i=0;

   		if(size==0){
   			return 0;	
   		}
   		else{
   		for(i;i<size;i++){
   			if(container[i].src==src){
   				max=container[i].seq;
   				sources=TRUE;	
   			}
   		}
   		if(sources==TRUE){
   			return (uint8_t)(max+1);	
   		}
   		else{
   			return 0;	
   		}
   	}	
	}
	command void HistoryList.printHistory(){
		uint16_t i=0;
   		dbg("proj1F","printing history (src,seq): ");
   		for(i=0;i<size;i++){
   			dbg_clear("proj1F","[%d, %d], ",container[i].src,container[i].seq);
   		}
   		dbg_clear("proj1F","\n");	
   	}
	
}
