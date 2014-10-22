import socket

class server:
	#initiate the binding
	def __init__(self,protocol='tcp',host='',port=8888,sock=None):
		self.protocol=protocol
		self.host=host
		self.port=port
		if sock is None:
			if protocol=='tcp':
				self.sock=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			else:
				self.sock=socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	def bind(num_of_sock):
		'''binding...'''
		self.sock.bind(socket.gethostname(),self.port)
		self.sock.listen(num_of_sock)
	
		
		
