#include "javascriptexample.h"

JavaScriptExample::JavaScriptExample()
{

}

JavaScriptExample::~JavaScriptExample()
{

}

void JavaScriptExample::registerFunctions(QScriptEngine* engine)
{
	// Create the function and register it to the engine


	// print(QString text) Function
	QScriptValue printFunction = engine->newFunction(print);
	engine->globalObject().setProperty("print", printFunction);

	// add(QNumber a,QNumber b) Function
	QScriptValue addFunction = engine->newFunction(add);
	engine->globalObject().setProperty("add", addFunction);

}

QScriptValue JavaScriptExample::print(QScriptContext* context,
	QScriptEngine* engine)
{
	qDebug() << context->argument(0).toString();
	return engine->undefinedValue();
}

QScriptValue JavaScriptExample::add(QScriptContext* context,
	QScriptEngine* engine)
{
	return context->argument(0).toNumber() +
		context->argument(1).toNumber();
}
