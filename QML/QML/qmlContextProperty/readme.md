## In this code, i describe:

```
Context Allow data to be exposed to QML COmponents instantiated by QML engine
There are two methods to pass those data to QML:
In a case of class instantiation:

	propertyWrapper wrapper;

	1. context.rootContext()->setContextProperty("Wrapper", &wrapper);
	Here, QML will access class properties via Wrapper.set or Wrapper.get -> dot product(.)
			

	2. context.rootContext()->setContextObject(&wrapper);
	In contrary, here, there is no need to use Dot product to access class properties with dot product
	therefore, qml will directly can access members of class

```
