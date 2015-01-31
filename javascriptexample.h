#ifndef JAVASCRIPTEXAMPLE_H
#define JAVASCRIPTEXAMPLE_H

#include <QtScript/QScriptEngine>
#include <QDebug>

class JavaScriptExample
{
public:

	JavaScriptExample();
	~JavaScriptExample();

	void registerFunctions(QScriptEngine* engine);

	static QScriptValue print(QScriptContext* context,
		QScriptEngine* engine);

	static QScriptValue add(QScriptContext* context,
		QScriptEngine* engine);

private:
	
};

#endif // JAVASCRIPTEXAMPLE_H
