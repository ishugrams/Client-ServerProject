------------------------------------------------------Client-Server Application---------------------------------------------------

I have created chat messenger using the concepts of advanced java programming and socket programming.
In that project the client-server applications are used to working the chat messenger.
Socket Programming means what: Java Socket programming is used for communication between the applications running on different JRE.
In this topic we are going to discuss such applications which will communicate with each other.
The below Application is divided into two parts:
	1)    Client.java
	2)    Server.java
 This two applications are used the working the chat messenger.
Creating Server:

To create the server application, we need to create the instance of ServerSocket class. 
Here, we are using 6666 port number for the communication between the client and server. You may also choose any other port number. 
The accept() method waits for the client. If clients connects with the given port number, it returns an instance of Socket.

Creating Client:
To create the client application, we need to create the instance of Socket class. 
Here, we need to pass the IP address or hostname of the Server and a port number. Here, we are using "localhost" because our server is running on same system.
lient: It is considered as a machine or application which wants some services and to get that services it will sends the request.
Server: It is considered as a machine or application which is used to provide the service.When request arrives to the Server the Server will process that request and sends the response.
Web Browser: It is considered as a software which is used to provide the services to the client.Every browse contain two major components:Example: Chrome FirefoxWeb Server: It is considered as a software which is used to provide services without client instruction.
Web Server contains the web container which is used to execute Java application or javascript application or PHP application or node JS application.

![image](https://github.com/ishugrams/Client-ServerProject/assets/98086525/a6d4d250-4d75-41d2-8c1a-25836b4cb381)

