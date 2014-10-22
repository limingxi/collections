import socket
import types

class client:
	#defult protocol is tcp, defult host is localhost
	def __init__(self,protocol='tcp',host='',port):
		self.protocol=protocol
		self.host=host
		self.port=port
	#send data
	def send(data):
		if isinstance(data, types.GeneratorType):
			data=fmt(data);
		socekt.setblocking(0)
		if self.protocol=='tcp':
			s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			s.connect((self.host,self.port))
			total_sent=0
			while(total_sent<len(data)):
				sent=s.send(data[total_sent:]);
				if sent == 0:
		        		raise RuntimeError("socket connection broken")
				total_sent=total_sent+sent
			s.close()
			return total_sent
		else:
			s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
			total_sent=0
			while(total_sent<len(data)):
				sent=s.sendto(data[total_sent:],(self.host,self.port));
				if sent == 0:
		        		raise RuntimeError("socket connection broken")
				total_sent=total_sent+sent
			s.close()
			return total_sent
	def fmt(data):
		res=''
		for i in data:
			res=res+str(i)+'\n'
		return res
