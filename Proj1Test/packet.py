#
# This class is automatically generated by mig. DO NOT EDIT THIS FILE.
# This class implements a Python interface to the 'pack'
# message type.
#
import sys
#if you get the following error message: ImportError: No module named tinyos.message.Message
#add the following
sys.path.append('/home/ubuntu/local/tinyos-2.1.1/support/sdk/python/')
import tinyos.message.Message

# The default size of this message type in bytes.
DEFAULT_MESSAGE_SIZE = 64#was 28

# The Active Message type associated with this message.
AM_TYPE = 6

class pack(tinyos.message.Message.Message):
    # Create a new pack of size 48. was 28
    def __init__(self, data="", addr=None, gid=None, base_offset=0, data_length=64):#was 28
        tinyos.message.Message.Message.__init__(self, data, addr, gid, base_offset, data_length)
        self.amTypeSet(AM_TYPE)
    
    # Get AM_TYPE
    def get_amType(cls):
        return AM_TYPE
    
    get_amType = classmethod(get_amType)
    
    #
    # Return a String representation of this message. Includes the
    # message type name and the non-indexed field values.
    #
    def __str__(self):
        s = "Message <pack> \n"
        try:
            s += "  [dest=0x%x]\n" % (self.get_dest())
        except:
            pass
        try:
            s += "  [src=0x%x]\n" % (self.get_src())
        except:
            pass
        try:
            s += "  [seq=0x%x]\n" % (self.get_seq())
        except:
            pass
        try:
            s += "  [TTL=0x%x]\n" % (self.get_TTL())
        except:
            pass
        try:
            s += "  [protocol=0x%x]\n" % (self.get_protocol())
        except:
            pass
        try:
            s += "  [payload=";
            for i in range(0, 20):#edit dis?20
                s += "0x%x " % (self.getElement_payload(i) & 0xff)
            s += "]\n";
        except:
            pass
        return s

    # Message-type-specific access methods appear below.

    #
    # Accessor methods for field: dest
    #   Field type: int
    #   Offset (bits): 0
    #   Size (bits): 16
    #

    #
    # Return whether the field 'dest' is signed (False).
    #
    def isSigned_dest(self):
        return False
    
    #
    # Return whether the field 'dest' is an array (False).
    #
    def isArray_dest(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'dest'
    #
    def offset_dest(self):
        return (0 / 8)
    
    #
    # Return the offset (in bits) of the field 'dest'
    #
    def offsetBits_dest(self):
        return 0
    
    #
    # Return the value (as a int) of the field 'dest'
    #
    def get_dest(self):
        return self.getUIntElement(self.offsetBits_dest(), 16, 1)
    
    #
    # Set the value of the field 'dest'
    #
    def set_dest(self, value):
        self.setUIntElement(self.offsetBits_dest(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'dest'
    #
    def size_dest(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'dest'
    #
    def sizeBits_dest(self):
        return 16
    
    #
    # Accessor methods for field: src
    #   Field type: int
    #   Offset (bits): 16
    #   Size (bits): 16
    #

    #
    # Return whether the field 'src' is signed (False).
    #
    def isSigned_src(self):
        return False
    
    #
    # Return whether the field 'src' is an array (False).
    #
    def isArray_src(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'src'
    #
    def offset_src(self):
        return (16 / 8)
    
    #
    # Return the offset (in bits) of the field 'src'
    #
    def offsetBits_src(self):
        return 16
    
    #
    # Return the value (as a int) of the field 'src'
    #
    def get_src(self):
        return self.getUIntElement(self.offsetBits_src(), 16, 1)
    
    #
    # Set the value of the field 'src'
    #
    def set_src(self, value):
        self.setUIntElement(self.offsetBits_src(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'src'
    #
    def size_src(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'src'
    #
    def sizeBits_src(self):
        return 16
    
    #
    # Accessor methods for field: seq
    #   Field type: int
    #   Offset (bits): 32
    #   Size (bits): 16
    #

    #
    # Return whether the field 'seq' is signed (False).
    #
    def isSigned_seq(self):
        return False
    
    #
    # Return whether the field 'seq' is an array (False).
    #
    def isArray_seq(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'seq'
    #
    def offset_seq(self):
        return (32 / 8)
    
    #
    # Return the offset (in bits) of the field 'seq'
    #
    def offsetBits_seq(self):
        return 32
    
    #
    # Return the value (as a int) of the field 'seq'
    #
    def get_seq(self):
        return self.getUIntElement(self.offsetBits_seq(), 16, 1)
    
    #
    # Set the value of the field 'seq'
    #
    def set_seq(self, value):
        self.setUIntElement(self.offsetBits_seq(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'seq'
    #
    def size_seq(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'seq'
    #
    def sizeBits_seq(self):
        return 16
    
    #
    # Accessor methods for field: TTL
    #   Field type: short
    #   Offset (bits): 48
    #   Size (bits): 8
    #

    #
    # Return whether the field 'TTL' is signed (False).
    #
    def isSigned_TTL(self):
        return False
    
    #
    # Return whether the field 'TTL' is an array (False).
    #
    def isArray_TTL(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'TTL'
    #
    def offset_TTL(self):
        return (48 / 8)
    
    #
    # Return the offset (in bits) of the field 'TTL'
    #
    def offsetBits_TTL(self):
        return 48
    
    #
    # Return the value (as a short) of the field 'TTL'
    #
    def get_TTL(self):
        return self.getUIntElement(self.offsetBits_TTL(), 8, 1)
    
    #
    # Set the value of the field 'TTL'
    #
    def set_TTL(self, value):
        self.setUIntElement(self.offsetBits_TTL(), 8, value, 1)
    
    #
    # Return the size, in bytes, of the field 'TTL'
    #
    def size_TTL(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of the field 'TTL'
    #
    def sizeBits_TTL(self):
        return 8
    
    #
    # Accessor methods for field: protocol
    #   Field type: short
    #   Offset (bits): 56
    #   Size (bits): 8
    #

    #
    # Return whether the field 'protocol' is signed (False).
    #
    def isSigned_protocol(self):
        return False
    
    #
    # Return whether the field 'protocol' is an array (False).
    #
    def isArray_protocol(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'protocol'
    #
    def offset_protocol(self):
        return (56 / 8)
    
    #
    # Return the offset (in bits) of the field 'protocol'
    #
    def offsetBits_protocol(self):
        return 56
    
    #
    # Return the value (as a short) of the field 'protocol'
    #
    def get_protocol(self):
        return self.getUIntElement(self.offsetBits_protocol(), 8, 1)
    
    #
    # Set the value of the field 'protocol'
    #
    def set_protocol(self, value):
        self.setUIntElement(self.offsetBits_protocol(), 8, value, 1)
    
    #
    # Return the size, in bytes, of the field 'protocol'
    #
    def size_protocol(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of the field 'protocol'
    #
    def sizeBits_protocol(self):
        return 8
    
    #
    # Accessor methods for field: payload
    #   Field type: short[]
    #   Offset (bits): 64
    #   Size of each element (bits): 8
    #

    #
    # Return whether the field 'payload' is signed (False).
    #
    def isSigned_payload(self):
        return False
    
    #
    # Return whether the field 'payload' is an array (True).
    #
    def isArray_payload(self):
        return True
    
    #
    # Return the offset (in bytes) of the field 'payload'
    #
    def offset_payload(self, index1):
        offset = 64
        if index1 < 0 or index1 >= 20:#edit dis?20
            raise IndexError
        offset += 0 + index1 * 8
        return (offset / 8)
    
    #
    # Return the offset (in bits) of the field 'payload'
    #
    def offsetBits_payload(self, index1):
        offset = 64
        if index1 < 0 or index1 >= 64:#edit dis?20
            raise IndexError
        offset += 0 + index1 * 8
        return offset
    
    #
    # Return the entire array 'payload' as a short[]
    #
    def get_payload(self):
        tmp = [None]*20#edit dis?20
        for index0 in range (0, self.numElements_payload(0)):
                tmp[index0] = self.getElement_payload(index0)
        return tmp
    
    #
    # Set the contents of the array 'payload' from the given short[]
    #
    def set_payload(self, value):
        for index0 in range(0, len(value)):
            self.setElement_payload(index0, value[index0])

    #
    # Return an element (as a short) of the array 'payload'
    #
    def getElement_payload(self, index1):
        return self.getUIntElement(self.offsetBits_payload(index1), 8, 1)
    
    #
    # Set an element of the array 'payload'
    #
    def setElement_payload(self, index1, value):
        self.setUIntElement(self.offsetBits_payload(index1), 8, value, 1)
    
    #
    # Return the total size, in bytes, of the array 'payload'
    #
    def totalSize_payload(self):
        return (160 / 8)#edit dis?160
    
    #
    # Return the total size, in bits, of the array 'payload'
    #
    def totalSizeBits_payload(self):
        return 160#edit dis?160
    
    #
    # Return the size, in bytes, of each element of the array 'payload'
    #
    def elementSize_payload(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of each element of the array 'payload'
    #
    def elementSizeBits_payload(self):
        return 8
    
    #
    # Return the number of dimensions in the array 'payload'
    #
    def numDimensions_payload(self):
        return 1
    
    #
    # Return the number of elements in the array 'payload'
    #
    def numElements_payload():
        return 20#edit dis?20
    
    #
    # Return the number of elements in the array 'payload'
    # for the given dimension.
    #
    def numElements_payload(self, dimension):
        array_dims = [ 20,  ]#edit dis?20
        if dimension < 0 or dimension >= 1:
            raise IndexException
        if array_dims[dimension] == 0:
            raise IndexError
        return array_dims[dimension]
    
    #
    # Fill in the array 'payload' with a String
    #
    def setString_payload(self, s):
         l = len(s)
         for i in range(0, l):
             self.setElement_payload(i, ord(s[i]));
         self.setElement_payload(l, 0) #null terminate
    
    #
    # Read the array 'payload' as a String
    #
    def getString_payload(self):
        carr = "";
        for i in range(0, 4000):#was 4000
            if self.getElement_payload(i) == chr(0):
                break
            carr += self.getElement_payload(i)
        return carr
    
