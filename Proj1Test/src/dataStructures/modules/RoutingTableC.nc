generic module RoutingTableC(int n){
	provides interface RoutingTable;
	uses interface NeighborList;
}
implementation{
	dvr table[n];
	uint16_t MAX_SIZE = n;
	uint16_t size = 0;
	
	command uint16_t RoutingTable.getSize(){
		return size;	
	}
	
	command void RoutingTable.populateTable(pair* list, uint16_t listSize){
			uint16_t i;
			uint16_t j;
			dvr insert;
			uint8_t exists;
			
			//dbg("genDebug","getting to RoutingTable\n");
			for(i=0;i<listSize;i++){
				exists=0;
				for(j=0;j<size;j++){
					if(table[j].dest==list->src){
						
						table[j].cost=1;
						table[j].nextHop=list->src;
						exists=1;
					}					
				}
				
				if(exists==0){
						insert.dest=list->src;
						insert.cost=1;
						insert.nextHop=list->src;
						call RoutingTable.pushback(insert);	
				}
				list++;
			}
			//dbg("genDebug","size %d\n",size);
	}
	
	command void RoutingTable.pushback(dvr element){
		if(size < MAX_SIZE){
			table[size] = element;
			size++;
		}	
	}
	
	command void RoutingTable.writeToPayload(uint8_t* payld, uint8_t neigbr){
		uint16_t it;
		dvrTransmission* it2;
		payld[0]=(uint8_t)size;
		
		it2=payld+1;
		for(it=0;it<size;it++){
			it2->dest=table[it].dest;
			if(neigbr==table[it].nextHop){
				it2->cost=16;	
			}
			else{
				it2->cost=table[it].cost;	
			}
			it2++;	
		}
		
	}
	
	command void RoutingTable.NeighborGotDeleted(uint8_t element){
		uint16_t i;
		for(i=0;i<size;i++){
			if(element==table[i].nextHop||element==table[i].dest){
				//dbg("Project2DV","Deleted %d element [%d, %d, %d]\n",element,table[i].dest,table[i].cost,table[i].nextHop);
				table[i].cost=16;//set the cost to infinity	
			}	
		}	
	}
	
	command uint8_t RoutingTable.nxtHopFrmDst(uint8_t dest){
		uint16_t i;
		for(i=0;i<size;i++){
			if(table[i].dest==dest){
				return table[i].nextHop;
			}	
		}
		return NULL;
	}
	
	command void RoutingTable.updateTable(uint8_t* payld, uint8_t source){
		
		uint8_t msgSize;
		dvrTransmission* iter;
		dvr toAdd;
		uint16_t i;
		uint16_t j;
		uint8_t newCost;
		uint8_t foundDest;
		msgSize=payld[0];

		iter=payld+1;
		if(size!=0){
		for(i=0;i<(uint16_t)msgSize;i++){
			if(TOS_NODE_ID!=iter[i].dest){
			foundDest=0;
			newCost=(iter[i].cost)+(call RoutingTable.cstFromDst(source));
			if(newCost>=16){
				newCost=16;	
			}
			for(j=0;j<size;j++){
					//if iter_i.dest not neighbor and cost is INF and packet next hop== table next hop
					if(iter[i].dest == table[j].dest){
						if(newCost==16 && source==table[j].nextHop && !(call NeighborList.neighborsContains(iter[i].dest))){//new code
							table[j].cost=16;
							foundDest=1;
						}
						else if(newCost<table[j].cost){
							table[j].cost=newCost;
							table[j].nextHop=source;
							foundDest=1;	
						}
						else if(newCost>=table[j].cost){
							foundDest=1;
						}
					}
			}
			if(foundDest==0){
					toAdd.dest=iter[i].dest;
					toAdd.cost=newCost;
					toAdd.nextHop=source;
					call RoutingTable.pushback(toAdd);
			}
			}
			//iter++;	
			
		}

		}
			
	}
	
	command void RoutingTable.NeighborGotAdded(uint8_t element){

	}
	
	command void RoutingTable.printTable(){
		uint16_t i=0;
   		dbg("Project2DV"," Routing Table: \n");
   		dbg("Project2DV","Dest\tHop\tCount\n");
   		for(i=0;i<size;i++){
   			dbg("Project2DV","%d\t%d\t%d\n",table[i].dest,table[i].nextHop,table[i].cost);
   			//dbg_clear("proj1N","[ %d],",(call neighbors.get(i)).src);
   		}
   		//dbg_clear("Project2DV","\n");
	}
	
	command uint8_t RoutingTable.cstFromDst(uint8_t dest){
		uint16_t i;
		for(i=0;i<size;i++){
			if(table[i].dest==dest){
				return table[i].cost;
			}	
		}
		return NULL;	
	}
	command void RoutingTable.refreshRoutingTable(){
	
	}
	
	command void RoutingTable.deleteDest(uint8_t toDelete){

	}
	
	command void RoutingTable.delete(uint16_t position){//position>0 and position<size-1

	}

}