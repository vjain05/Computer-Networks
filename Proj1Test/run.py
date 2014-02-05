#ANDES Lab - University of California, Merced
#Author: UCM ANDES Lab
#Last Update: 2013/09/03

#! /usr/bin/python
from TOSSIM import *
from packet import *
import sys

t = Tossim([])
r = t.radio()

# Read topology file.
#do g=open("some.txt","w")
f = open("topo.txt", "r")
for line in f:
  s = line.split()
  if s:
    print " ", s[0], " ", s[1], " ", s[2];
    r.add(int(s[0]), int(s[1]), float(s[2]))

g=open("Flooding.txt","w")
h=open("NeighborDisc.txt","w")
gh=open("DistanceVectorRouting.txt","w")
fz=open("sampleOutput.txt","w")
zzTop=open("oogaBoogie.txt","w")
# Channels used for debuging
t.addChannel("proj1F", g)
#replace sys.stdout with g
t.addChannel("proj1N", h);
t.addChannel("genDebug", fz);
t.addChannel("Project2DV",gh);
t.addChannel("Project3TDbg",zzTop)
# Get and Create a Noise Model
#noise = open("no_noise.txt", "r")
noise = open("heavy_noise_30_.txt","r")
for line in noise:
  str1 = line.strip()
  if str1:
    val = int(str1)
    for i in range(1, 12):#change 5 back to 3
       t.getNode(i).addNoiseTraceReading(val)

for i in range(1, 12):#change 5 back to 3
  print "Creating noise model for ",i;
  t.getNode(i).createNoiseModel()

t.getNode(1).bootAtTime(1000);
t.getNode(2).bootAtTime(2333);
t.getNode(3).bootAtTime(3666);#remove this line later
t.getNode(4).bootAtTime(5000);#remove this later
t.getNode(5).bootAtTime(6333);
t.getNode(6).bootAtTime(7666);
t.getNode(7).bootAtTime(9000);
t.getNode(8).bootAtTime(10333);
t.getNode(9).bootAtTime(11666);#remove this line later
t.getNode(10).bootAtTime(12000);#remove this later
t.getNode(11).bootAtTime(13333);
#t.getNode(12).bootAtTime(16666);
#t.getNode(13).bootAtTime(19999);
#t.getNode(14).bootAtTime(23333);
#t.getNode(15).bootAtTime(26666);
#t.getNode(16).bootAtTime(29999);
#t.getNode(17).bootAtTime(33333);
#t.getNode(18).bootAtTime(36666);
#t.getNode(19).bootAtTime(39999);

def package(string):
 	ints = []
	for c in string:
		ints.append(ord(c))
	return ints

def run(ticks):
	for i in range(ticks):
		t.runNextEvent()

def runTime(amount):
   i=0
   while i<amount*1000:
      t.runNextEvent() 
      i=i+1

    
#Create a Command Packet
msg = pack()
msg.set_seq(0)
msg.set_TTL(15)
msg.set_protocol(99)

pkt = t.newPacket()
pkt.setData(msg.data)
pkt.setType(msg.get_amType())

# COMMAND TYPES
CMD_PING = "0"
CMD_NEIGHBOR_DMP="1"
CMD_ROUTETABLE_DMP="3"
CMD_TEST_CLIENT="4"
CMD_TEST_SERVER="5"
CMD_KILL="6"
CMD_TEST_CLIENT_END="7"
CMD_HELLO="8"
CMD_MSG="a"
CMD_WISP="b"
CMD_LISTUSR="c"

# Generic Command
def sendCMD(string):
   args = string.split(' ');
   msg.set_src(int(args[0]));
   msg.set_dest(int(args[0]));
   msg.set_protocol(99);
   payload=args[1]

   for i in range(2, len(args)):
      payload= payload + ' '+ args[i]
	
   msg.setString_payload(payload)
   
   pkt.setData(msg.data)
   pkt.setDestination(int(args[0]))
   
   #print "Delivering!"
   pkt.deliver(int(args[0]), t.time()+5)
   runTime(2);

def cmdPing(source, destination, msg):
   dest=chr(ord('0')+destination)
   #src=chr(ord('0')+source)
   sendCMD(str(source) +" "+ CMD_PING +dest+msg);
   
def cmdNeighborDmp(source):
    sendCMD(str(source)+" "+CMD_NEIGHBOR_DMP);
    
def cmdRoutetableDmp(source):
    sendCMD(str(source)+" "+CMD_ROUTETABLE_DMP);

def cmdTestServer(source,port):
    prt=chr(ord('0')+port)
    sendCMD(str(source)+" "+CMD_TEST_SERVER+prt)
    
def cmdTestClient(source,dest,portsrc,portdest,transfer):
    dst=chr(ord('0')+dest)
    prt1=chr(ord('0')+portsrc)
    prt2=chr(ord('0')+portdest)
    sendCMD(str(source)+" "+CMD_TEST_CLIENT+dst+prt1+prt2+str(transfer)+" ")

def cmdTestClientEnd(source,dest,portsrc,portdest):
    dst=chr(ord('0')+dest)
    prt1=chr(ord('0')+portsrc)
    prt2=chr(ord('0')+portdest)
    sendCMD(str(source)+" "+CMD_TEST_CLIENT_END+dst+prt1+prt2)

def cmdHello(source,portsrc,username):#client:1, destPort:41
    #dst=chr(ord('0')+dest)
    prt1=chr(ord('0')+portsrc)
    #prt2=chr(ord('0')+portdest)
    sendCMD(str(source)+" "+CMD_HELLO+prt1+username+" ")

def cmdMsg(source,msg):
    sendCMD(str(source)+" "+CMD_MSG+msg+chr(13)+chr(10))

def cmdWisp(source,username,msg):
    sendCMD(str(source)+" "+CMD_WISP+username+" "+msg+chr(13)+chr(10))

def cmdListUsr(source):
    sendCMD(str(source)+" "+CMD_LISTUSR)

def startServer():
    cmdTestServer(1,41)

runTime(400)
#cmdTestServer(5,81);
startServer()
runTime(30)
cmdHello(3,3,"acerpa")
#cmdTestClient(7,5,80,81,1100);
runTime(50)
cmdHello(4,3,"verickson")

runTime(50)
cmdHello(5,3,"dwinkler2")

runTime(50)
cmdHello(6,3,"abeltran2")

runTime(50)
cmdMsg(3,"Hello World!")
#cmdTestClient(6,5,80,81,1234);
#runTime(30)cmdTestClient(4,5,80,81,1234);
runTime(50)
cmdWisp(3,"abeltran2","Hi!")
#cmdTestClient(2,5,79,81,400);
runTime(50)
cmdListUsr(3)
#cmdTestClient(2,5,79,81,1234);
#runTime(30)
#cmdWisp(3,"acerpa","Bobo")
#cmdTestClient(1,5,79,81,400);
#runTime(30)
#cmdTestClient(8,5,78,81,1234);
#runTime(30)
#cmdTestClient(9,5,78,81,1234);
#runTime(510)
#cmdTestClientEnd(7,5,80,81);
#runTime(30)
#cmdTestClientEnd(6,5,80,81);
#runTime(30)
#cmdTestClientEnd(4,5,80,81);
#runTime(30)
#cmdTestClientEnd(3,5,79,81);
#runTime(30)
#cmdTestClientEnd(2,5,79,81);
#runTime(30)
#cmdTestClientEnd(1,5,79,81);
#runTime(30)
#cmdTestClientEnd(8,5,78,81);
#runTime(30)
#cmdTestClientEnd(9,5,78,81);
runTime(105)
#for i in range(1,11):
#    cmdNeighborDmp(i)
#    
#for i in range(1,12):
#    cmdRoutetableDmp(i)
#runTime(10)    
#t.getNode(5).turnOff();

#t.getNode(9).turnOff();
#runTime(400)
#cmdPing(8,10,"Boo!");#change back to 2
#runTime(10)
#for i in range(1,11):
#    cmdNeighborDmp(i)
#    
#for i in range(1,12):
#    cmdRoutetableDmp(i)
#runTime(10)
#runTime(1)
#cmdPing(1,4,"Boo2!")   
#t.getNode(5).turnOn();

#runTime(400)
#runTime(1)
#for i in range(1,12):
#    cmdRoutetableDmp(i)

runTime(10)
#cmdPing(1,4,"Boo 3!")
#runTime(1)
#cmdPing(2,3,"Boo three!")
#runTime(2)
#cmdPing(1,3,"You Suck!")
#t.getNode(5).turnOff()
#cmdPing(1,11,"You STIL Suck!")
#runTime(3)
#cmdPing(2, 3, "You Suck!");
#runTime(10)
f.close()
g.close()
h.close()
gh.close()
fz.close()
zzTop.close()