#ifndef RESERVEDTOKEN_H
#define RESERVEDTOKEN_H

enum class ReservedToken : std::uint8_t{
    Unknown,

    Assign,

    OpAdd,
    OpReduce,
    OpMultiply,
    OpDivide

    OpParenthesisParOpen,
    OpParenthesisClose,
    OpSubscriptOpen,
    OpSubscriptClose,

    KwAnd,
    KwOr,
    KwNot,
    KwTrue,
    KwFalse,
    KwDef,
    KwIf,

    KwInt,

    KwPrint,
    KwInput,

    Num
};
#endif