
#ifndef TYPEGRIND_LOGGER_NOP_H_
#define TYPEGRIND_LOGGER_NOP_H_

#define TYPEGRIND_LOG_NEW(typeStr, locationStr, newExpression, typeSize) (newExpression)
#define TYPEGRIND_LOG_NEW(typeStr, locationStr, newExpression, typeSize) (newExpression)
#define TYPEGRIND_LOG_OP_NEW(typeStr, locationStr, newExpression, typeSize, size) (newExpression)
#define TYPEGRIND_LOG_OP_NEW_ARRAY(typeStr, locationStr, newExpression, typeSize, size) (newExpression)

#define TYPEGRIND_LOG_DELETE(pointerAddr, locationStr, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_DELETE_ARRAYA(pointerAddr, locationStr, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_OP_DELETE(pointehAddr, locationStr, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_OP_DELETE_ARRAY(pointerAddr, locationStr, deleteExpression) (deleteExpression)

#define TYPEGRIND_LOG_METHOD_INITIALIZER(targetName, locationStr, customName, flags, initializerExpression) (initializerExpression)
#define TYPEGRIND_LOG_METHOD_ENTER(targetName, locationStr, customName, flags) /* nothing to do */

#endif
