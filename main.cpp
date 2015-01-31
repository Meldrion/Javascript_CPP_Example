
#include <QtCore/QCoreApplication>
#include <QtScript/QScriptEngine>
#include "javascriptexample.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
	qDebug() << "";
	qDebug() << "C++ Javascript example";
	qDebug() << "-------------------------------------";

	qDebug() << "This project executes javascript within "
		<< "an c++ application.";
	qDebug() << "The Javascript code calls native c++ methods";
	qDebug() << "";
	qDebug() << "";

	qDebug() << "Executed Script Result: ";
	QScriptEngine engine;

	JavaScriptExample javaScriptExample;
	javaScriptExample.registerFunctions(&engine);

	engine.evaluate("var a = 999; var b = 666;");
	engine.evaluate("print(a + \" + \" + b + \" = \" + add(a,b) );");

	qDebug() << "";
	qDebug() << "";
	qDebug() << "Press enter to exit application";
	getchar();

	return 0;
}
