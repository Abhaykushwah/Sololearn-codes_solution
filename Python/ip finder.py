import socket
#coded by Abhay

host = input("Enter a website name :\n")
print (f"IP of {host} is {socket.gethostbyname(host)}")
