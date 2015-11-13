#if !defined(__LX_VALUETYPEOBJECTS_H)
#define __LX_VALUETYPEOBJECTS_H

#include "LXDefs.h"
#include "LXString.h"
#include "Object.h"
#include "ValueObject.h"
#include "IStream.h"
#include "IParserEventSink.h"

/**
 * \file ValueTypeObjects.h
 *
 * Contains the definitions of all the simple value "box" objects.
 */
namespace LX
{

/**
 * Represents a String simple type in the SDK.  
 *
 * This object represents a boxed or objectified representation of C++ simple types.
 */
class StringObject : public ValueObject
{
public:
	typedef String Type;

    /**
     * Returns the C++ value representation.
     *
     * @return Returns the C++ value.
     */
	virtual String value () const = 0;

    /**
     * Sets the value of the boxed representation.
     */
    virtual void setValue (
		String strValue) = 0;

    /**
     * Sends a string representation of the value to a passed in stream.
     *
     * @param The stream to send the output to.
     */
	virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns a string representation of the type.
     *
     * @return The string value.
     */
	virtual String toString () const = 0;
};



/**
 * Represents a Double simple type in the SDK.  
 *
 * This object represents a boxed or objectified representation of C++ simple types.
 */
class DoubleObject : public ValueObject
{
public:
	typedef double Type;

    /**
     * Returns the C++ value representation.
     *
     * @return Returns the C++ value.
     */
	virtual double value() const = 0;

    /**
     * Sets the value of the boxed representation.
     */
	virtual void setValue (
		double dValue) = 0;

    /**
     * Sends a string representation of the value to a passed in stream.
     *
     * @param The stream to send the output to.
     */
	virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns a string representation of the type.
     *
     * @return The string value.
     */
	virtual String toString () const = 0;
};



/**
 * Represents a Integer simple type in the SDK.  
 *
 * This object represents a boxed or objectified representation of C++ simple types.
 */
class IntegerObject : public ValueObject
{
public:
	typedef int Type;

    /**
     * Returns the C++ value representation.
     *
     * @return Returns the C++ value.
     */
	virtual int value() const = 0;

    /**
     * Sets the value of the boxed representation.
     */
    virtual void setValue (
		int nValue) = 0;

    /**
     * Sends a string representation of the value to a passed in stream.
     *
     * @param The stream to send the output to.
     */
	virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns a string representation of the type.
     *
     * @return The string value.
     */
	virtual String toString () const = 0;
};


/**
 * Represents an Unsigned Integer simple type in the SDK.  
 *
 * This object represents a boxed or objectified representation of C++ simple types.
 */
class UIntegerObject : public ValueObject
{
public:
	typedef unsigned int Type;

    /**
     * Returns the C++ value representation.
     *
     * @return Returns the C++ value.
     */
	virtual unsigned int value() const = 0;

    /**
     * Sets the value of the boxed representation.
     */
	virtual void setValue (
		unsigned int nValue) = 0;

    /**
     * Sends a string representation of the value to a passed in stream.
     *
     * @param The stream to send the output to.
     */
	virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns a string representation of the type.
     *
     * @return The string value.
     */
	virtual String toString () const = 0;
};


/**
 * Represents a Boolean simple type in the SDK.  
 *
 * This object represents a boxed or objectified representation of C++ simple types.
 */
class BooleanObject : public ValueObject
{
public:
	typedef bool Type;

    /**
     * Returns the C++ value representation.
     *
     * @return Returns the C++ value.
     */
	virtual bool value() const = 0;

    /**
     * Sets the value of the boxed representation.
     */
	virtual void setValue (
		bool bValue) = 0;

    /**
     * Sends a string representation of the value to a passed in stream.
     *
     * @param The stream to send the output to.
     */
	virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns a string representation of the type.
     *
     * @return The string value.
     */
	virtual String toString () const = 0;

	static const wchar_t* kstrTrue;
	static const wchar_t* kstrFalse;
};


/**
 *Base class for all the Enum Types.  
 */
class  EnumObject : public ValueObject
{
};

}; // End Namespace

#endif


