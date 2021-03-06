#pragma once

#include <Parsers/IParserBase.h>


namespace DB
{

class ParserQuery : public IParserBase
{
private:
    const char * end;

    const char * getName() const override { return "Query"; }
    bool parseImpl(Pos & pos, ASTPtr & node, Expected & expected) override;
public:
    ParserQuery(const char * end) : end(end) {}
};

}
