
#ifndef TYPEGRIND_LOGGER_NOP_H_
#define TYPEGRIND_LOGGER_NOP_H_

#define TYPEGRIND_LOG_NEW(locationStr, typeStr, canonicalStr, typeSize, newExpression) (newExpression)
#define TYPEGRIND_LOG_NEW_ARRAY(locationStr, typeStr, canonicalStr, typeSize, newExpression) (newExpression)
#define TYPEGRIND_LOG_OP_NEW(typeStr, locationStr, typeSize, size, newExpression) (newExpression)
#define TYPEGRIND_LOG_OP_NEW_ARRAY(typeStr, locationStr, typeSize, size, newExpression) (newExpression)

#define TYPEGRIND_LOG_DELETE(locationStr, typeStr, canonicalType, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_DELETE_ARRAYA(locationStr, typeStr, canonicalType, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_OP_DELETE(pointehAddr, locationStr, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_OP_DELETE_ARRAY(pointerAddr, locationStr, deleteExpression) (deleteExpression)

#define TYPEGRIND_LOG_METHOD_INITIALIZER(targetName, locationStr, customName, flags, initializerExpression) (initializerExpression)
#define TYPEGRIND_LOG_METHOD_ENTER(targetName, locationStr, customName, flags) /* nothing to do */

#define tYPEGRIND_DEMANGLE(s) ""

#endif
