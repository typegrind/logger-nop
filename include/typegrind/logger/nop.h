
#ifndef TYPEGRIND_LOGGER_NOP_H_
#define TYPEGRIND_LOGGER_NOP_H_

#define TYPEGRIND_LOG_NEW(locationStr, typeStr, canonicalStr, typeSize, newExpression) (newExpression)
#define TYPEGRIND_LOG_NEW_ARRAY(locationStr, typeStr, canonicalStr, typeSize, newExpression) (newExpression)
#define TYPEGRIND_LOG_OP_NEW(locationStr, typeStr, canonicalStr, typeSize, size, newExpression) (newExpression)
#define TYPEGRIND_LOG_OP_NEW_ARRAY(locationStr, typeStr, canonicalStr, typeSize, size, newExpression) (newExpression)

#define TYPEGRIND_LOG_DELETE(locationStr, typeStr, canonicalType, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_DELETE_ARRAYA(locationStr, typeStr, canonicalType, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_OP_DELETE(locationStr, typeStr, canonicalType, deleteExpression) (deleteExpression)
#define TYPEGRIND_LOG_OP_DELETE_ARRAY(locationStr, typeStr, canonicalType, deleteExpression) (deleteExpression)

#define TYPEGRIND_LOG_FUNCTION_ENTER(locationStr, targetName, customName, flags) /* nothing to do */
#define TYPEGRIND_LOG_FUNCTION_AUTO_ENTER(locationStr, targetName) /* nothing to do */

#define tYPEGRIND_DEMANGLE(s) ""

#endif
