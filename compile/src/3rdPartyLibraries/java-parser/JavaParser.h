/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JavaParser */

#ifndef _Included_JavaParser
#define _Included_JavaParser
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JavaParser
 * Method:    cactionCompilationUnitList
 * Signature: (I[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionCompilationUnitList
  (JNIEnv *, jobject, jint, jobjectArray);

/*
 * Class:     JavaParser
 * Method:    cactionCompilationUnitDeclaration
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionCompilationUnitDeclaration
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionTypeDeclaration
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionTypeDeclaration
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionConstructorDeclaration
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionConstructorDeclaration
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionConstructorDeclarationEnd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionConstructorDeclarationEnd
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionExplicitConstructorCall
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionExplicitConstructorCall
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionMethodDeclaration
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionMethodDeclaration
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionSingleTypeReference
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSingleTypeReference
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionArgument
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArgument
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     JavaParser
 * Method:    cactionArrayTypeReference
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayTypeReference
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionMessageSend
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionMessageSend
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionMessageSendEnd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionMessageSendEnd
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedNameReference
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedNameReference
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionStringLiteral
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionStringLiteral
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionAllocationExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionAllocationExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionAND_AND_Expression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionAND_1AND_1Expression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionAnnotationMethodDeclaration
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionAnnotationMethodDeclaration
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionArgumentClassScope
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArgumentClassScope
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionArrayAllocationExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayAllocationExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionArrayInitializer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayInitializer
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionArrayQualifiedTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayQualifiedTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionArrayQualifiedTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayQualifiedTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionArrayReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionArrayTypeReferenceClassScope
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArrayTypeReferenceClassScope
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionAssertStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionAssertStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionAssignment
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionAssignment
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionBinaryExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBinaryExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionBlock
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBlock
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionBreakStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBreakStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionCaseStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionCaseStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionCastExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionCastExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionCharLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionCharLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionClassLiteralAccess
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionClassLiteralAccess
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionClinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionClinit
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionConditionalExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionConditionalExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionContinueStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionContinueStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionCompoundAssignment
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionCompoundAssignment
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionDoStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionDoStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionDoubleLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionDoubleLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionEmptyStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionEmptyStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionEqualExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionEqualExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionExtendedStringLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionExtendedStringLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionFalseLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionFalseLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionFieldDeclaration
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionFieldDeclaration
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionFieldReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionFieldReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionFieldReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionFieldReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionFloatLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionFloatLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionForeachStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionForeachStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionForStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionForStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionIfStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionIfStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionImportReference
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionImportReference
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     JavaParser
 * Method:    cactionInitializer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionInitializer
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionInstanceOfExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionInstanceOfExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionIntLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionIntLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadoc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadoc
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocAllocationExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocAllocationExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocAllocationExpressionClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocAllocationExpressionClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocArgumentExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocArgumentExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocArgumentExpressionClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocArgumentExpressionClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocArrayQualifiedTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocArrayQualifiedTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocArrayQualifiedTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocArrayQualifiedTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocArraySingleTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocArraySingleTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocArraySingleTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocArraySingleTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocFieldReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocFieldReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocFieldReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocFieldReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocImplicitTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocImplicitTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocImplicitTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocImplicitTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocMessageSend
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocMessageSend
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocMessageSendClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocMessageSendClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocQualifiedTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocQualifiedTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocQualifiedTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocQualifiedTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocReturnStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocReturnStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocReturnStatementClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocReturnStatementClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocSingleNameReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocSingleNameReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocSingleNameReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocSingleNameReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocSingleTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocSingleTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionJavadocSingleTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionJavadocSingleTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionLabeledStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionLabeledStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionLocalDeclaration
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionLocalDeclaration
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionLongLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionLongLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionMarkerAnnotation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionMarkerAnnotation
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionMemberValuePair
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionMemberValuePair
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionStringLiteralConcatenation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionStringLiteralConcatenation
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionNormalAnnotation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionNormalAnnotation
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionNullLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionNullLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionOR_OR_Expression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionOR_1OR_1Expression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionParameterizedQualifiedTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionParameterizedQualifiedTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionParameterizedQualifiedTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionParameterizedQualifiedTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionParameterizedSingleTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionParameterizedSingleTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionParameterizedSingleTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionParameterizedSingleTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionPostfixExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionPostfixExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionPrefixExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionPrefixExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedAllocationExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedAllocationExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedSuperReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedSuperReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedSuperReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedSuperReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedThisReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedThisReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedThisReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedThisReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedTypeReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedTypeReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionQualifiedTypeReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionQualifiedTypeReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionReturnStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionReturnStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSingleMemberAnnotation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSingleMemberAnnotation
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSingleNameReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSingleNameReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSingleNameReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSingleNameReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSuperReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSuperReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSwitchStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSwitchStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSynchronizedStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSynchronizedStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionThisReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionThisReference
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionThisReferenceClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionThisReferenceClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionThrowStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionThrowStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionTrueLiteral
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionTrueLiteral
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionTryStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionTryStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionTypeParameter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionTypeParameter
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionTypeParameterClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionTypeParameterClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionUnaryExpression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionUnaryExpression
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionWhileStatement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionWhileStatement
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionWildcard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionWildcard
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionWildcardClassScope
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionWildcardClassScope
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionBuildImplicitClassSupportStart
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBuildImplicitClassSupportStart
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionBuildImplicitClassSupportEnd
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBuildImplicitClassSupportEnd
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionBuildImplicitMethodSupport
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBuildImplicitMethodSupport
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionBuildImplicitFieldSupport
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionBuildImplicitFieldSupport
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionArgumentName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArgumentName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionArgumentModifiers
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArgumentModifiers
  (JNIEnv *, jobject, jint);

/*
 * Class:     JavaParser
 * Method:    cactionArgumentEnd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionArgumentEnd
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionGenerateType
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionGenerateType
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionGenerateClassType
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionGenerateClassType
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionStatementEnd
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionStatementEnd
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JavaParser
 * Method:    cactionMethodDeclarationEnd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionMethodDeclarationEnd
  (JNIEnv *, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionGenerateArrayType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionGenerateArrayType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateBooleanType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateBooleanType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateByteType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateByteType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateCharType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateCharType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateIntType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateIntType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateShortType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateShortType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateFloatType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateFloatType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateLongType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateLongType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateDoubleType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateDoubleType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    generateNullType
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaParser_generateNullType
  (JNIEnv *, jclass);

/*
 * Class:     JavaParser
 * Method:    cactionGenerateToken
 * Signature: (LJavaToken;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionGenerateToken
  (JNIEnv *, jclass, jobject);

/*
 * Class:     JavaParser
 * Method:    cactionSetSourcePosition
 * Signature: (LJavaSourcePositionInformation;)V
 */
JNIEXPORT void JNICALL Java_JavaParser_cactionSetSourcePosition
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
