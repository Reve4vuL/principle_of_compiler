%{
#include<stdio.h>
#include<stdlib.h>
#include<string>
int yylex(void);
void yyerror(const char *);
%}

%token ID C_int C_float ADDASSIGN SUBASSIGN MULASSIGN DIVASSIGN
%token INT FLOAT IF ELSE FOR WHILE CASE DO CONTINUE BREAK RETURN SWITCH
%token OR AND '=' '+' '*' '-' '/' ',' ';' '[' ']' '{' '}' '>' '<' '!' '.' '(' ')' '?' ':' EQ NE BT LT INC DEC

%expect 1
%start translation_unit


%%



primary_expression
	: ID{
	printf("\tprimary_expression->ID\n");
}
	| C_int{
	printf("\tprimary_expression->C_int\n");
}
	| C_float{
	printf("\tprimary_expression->C_float\n");
}
	| '(' expression ')'{
	printf("\tprimary_expression->'(' expression ')'\n");
}
	;

postfix_expression
	: primary_expression{
	printf("\tpostfix_expression->primary_expression\n");
}
	| postfix_expression '[' expression ']'{
	printf("\tpostfix_expression->postfix_expression '[' expression ']'\n");
}
	| postfix_expression '(' ')'{
	printf("\tpostfix_expression->postfix_expression '(' ')'\n");
}
	| postfix_expression '(' argument_expression_list ')'{
	printf("\tpostfix_expression->postfix_expression '(' argument_expression_list ')'\n");
}
	| postfix_expression '.' ID{
	printf("\tpostfix_expression->postfix_expression '.' ID\n");
}
	| postfix_expression INC{
	printf("\tpostfix_expression->postfix_expression INC\n");
}
	| postfix_expression DEC{
	printf("\tpostfix_expression->postfix_expression DEC\n");
}
	;

argument_expression_list
	: assignment_expression{
	printf("\targument_expression_list->assignment_expression\n");
}
	| argument_expression_list ',' assignment_expression{
	printf("\targument_expression_list->argument_expression_list ',' assignment_expression\n");
}
	;

unary_expression
	: postfix_expression{
	printf("\tunary_expression->postfix_expression\n");
}
	| INC unary_expression{
	printf("\tunary_expression->INC unary_expression\n");
}
	| DEC unary_expression{
	printf("\tunary_expression->DEC unary_expression\n");
}
	| unary_operator cast_expression{
	printf("\tunary_expression->unary_operator cast_expression\n");
}
	;
//单目
unary_operator
	: '*'{
	printf("\tunary_operator->'*'\n");
}
	| '+'{
	printf("\tunary_operator->'+'\n");
}
	| '-'{
	printf("\tunary_operator->'-'\n");
}
	| '!'{
	printf("\tunary_operator->'|'\n");
}
	;
//强制转换表达式
cast_expression
	: unary_expression{
	printf("\tcast_expression->unary_expression\n");
}
	| '(' type_name ')' cast_expression{
	printf("\tcast_expression->'(' type_name ')' cast_expression\n");
}
	;
//乘除法
multiplicative_expression
	: cast_expression{
	printf("\tmultiplicative_expression->cast_expression\n");
}
	| multiplicative_expression '*' cast_expression{
	printf("\tmultiplicative_expression->multiplicative_expression '*' cast_expression\n");
}
	| multiplicative_expression '/' cast_expression{
	printf("\tmultiplicative_expression->multiplicative_expression '*' cast_expression\n");
}
	| multiplicative_expression '%' cast_expression{
	printf("\tmultiplicative_expression->multiplicative_expression '*' cast_expression\n");
}
	;
//加减
additive_expression
	: multiplicative_expression{
	printf("\tadditive_expression->multiplicative_expression\n");
}
	| additive_expression '+' multiplicative_expression{
	printf("\tadditive_expression->additive_expression '+' multiplicative_expression\n");
}
	| additive_expression '-' multiplicative_expression{
	printf("\tadditive_expression->additive_expression '+' multiplicative_expression\n");
}
	;

//关系
relational_expression
	: additive_expression{
	printf("\trelational_expression->additive_expression\n");
}
	| relational_expression '<' additive_expression{
	printf("\trelational_expression->relational_expression '<' additive_expression\n");
}
	| relational_expression '>' additive_expression{
	printf("\trelational_expression->relational_expression '>' additive_expression\n");
}
	| relational_expression BT additive_expression{
	printf("\trelational_expression->relational_expression BT additive_expression\n");
}
	| relational_expression LT additive_expression{
	printf("\trelational_expression->relational_expression LT additive_expression\n");
}
	;
//等于不等于
equality_expression
	: relational_expression{
	printf("\tequality_expression->relational_expression\n");
}
	| equality_expression EQ relational_expression{
	printf("\tequality_expression->equality_expression EQ relational_expression\n");
}
	| equality_expression NE relational_expression{
	printf("\tequality_expression->equality_expression NE relational_expression\n");
}
	;

and_expression
	: equality_expression{
	printf("\tand_expression->equality_expression\n");
}
	| and_expression '&' equality_expression{
	printf("\tand_expression->and_expression '&' equality_expression\n");
}
	;

//逻辑与
logical_and_expression
	: and_expression{
	printf("\tlogical_and_expression->and_expression\n");
}
	| logical_and_expression AND and_expression{
	printf("\tlogical_and_expression->logical_and_expression AND and_expression\n");
}
	;
//逻辑或
logical_or_expression
	: logical_and_expression{
	printf("\tlogical_or_expression->logical_and_expression\n");
}
	| logical_or_expression OR logical_and_expression{
	printf("\tlogical_or_expression->logical_or_expression OR logical_and_expression\n");
}
	;
//三目
conditional_expression
	: logical_or_expression{
	printf("\tconditional_expression->logical_or_expression\n");
}
	| logical_or_expression '?' expression ':' conditional_expression{
	printf("\tconditional_expression->logical_or_expression '?' expression ':' conditional_expression\n");
}
	;

assignment_expression
	: conditional_expression{
	printf("\tassignment_expression->conditional_expression\n");
}
	| unary_expression assignment_operator assignment_expression{
	printf("\tassignment_expression->unary_expression assignment_operator assignment_expression\n");
}
	;
//赋值
assignment_operator
	: '='{
	printf("\tassignment_operator->'='\n");
}
	| MULASSIGN{
	printf("\tassignment_operator->MULASSIGN\n");
}
	| DIVASSIGN{
	printf("\tassignment_operator->DIVASSIGN\n");
}
	| SUBASSIGN{
	printf("\tassignment_operator->SUBASSIGN\n");
}
	| ADDASSIGN{
	printf("\tassignment_operator->ADDASSIGN\n");
}
	;

expression
	: assignment_expression{
	printf("\texpression->assignment_expression\n");
}
	| expression ',' assignment_expression{
	printf("\texpression->expression ',' assignment_expression\n");
}
	;

constant_expression
	: conditional_expression{
	printf("\tconstant_expression->conditional_expression\n");
}
	;

declaration
	: declaration_specifiers ';'{
	printf("\tdeclaration->declaration_specifiers ';'\n");
}
	| declaration_specifiers init_declarator_list ';'{
	printf("\tdeclaration->declaration_specifiers init_declarator_list ';'\n");
}
	;

declaration_specifiers
	: type_specifier{
	printf("\tdeclaration_specifiers->type_specifier\n");
}
	| type_specifier declaration_specifiers{
	printf("\tdeclaration_specifiers->type_specifier declaration_specifiers\n");
}
	;

init_declarator_list
	: init_declarator{
	printf("\tinit_declarator_list->init_declarator\n");
}
	| init_declarator_list ',' init_declarator{
	printf("\tinit_declarator_list->init_declarator_list ',' init_declarator\n");
}
	;

init_declarator
	: declarator{
	printf("\tinit_declarator->declarator\n");
}
	| declarator '=' initializer{
	printf("\tinit_declarator->declarator '=' initializer\n");
}
	;


type_specifier
	: INT{
	printf("\ttype_specifier->INT\n");
}
	| FLOAT{
	printf("\ttype_specifier->FLOAT\n");
}
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list{
	printf("\tspecifier_qualifier_list->type_specifier specifier_qualifier_list\n");
}
	| type_specifier{
	printf("\tspecifier_qualifier_list->type_specifier\n");
}
	;



declarator
	: pointer direct_declarator{
	printf("\tdeclarator->pointer direct_declarator\n");
}
	| direct_declarator{
	printf("\tdeclarator->direct_declarator\n");
}
	;

direct_declarator
	: ID{
	printf("\tdirect_declarator->ID\n");
}
	| '(' declarator ')'{
	printf("\tdirect_declarator->'(' declarator ')'\n");
}
	| direct_declarator '[' constant_expression ']'{
	printf("\tdirect_declarator->direct_declarator '[' constant_expression ']'\n");
}
	| direct_declarator '[' ']'{
	printf("\tdirect_declarator->direct_declarator '[' ']'\n");
}
	| direct_declarator '(' parameter_type_list ')'{
	printf("\tdirect_declarator->direct_declarator '(' parameter_type_list ')\n");
}
	| direct_declarator '(' identifier_list ')'{
	printf("\tdirect_declarator->direct_declarator '(' identifier_list ')'\n");
}
	| direct_declarator '(' ')'{
	printf("\tdirect_declarator->direct_declarator '(' ')'\n");
}
	;

pointer
	: '*'{
	printf("\tpointer->'*'\n");
}
	| '*' pointer{
	printf("\tpointer->'*' pointer\n");
}
	;




parameter_type_list
	: parameter_list{
	printf("\tparameter_type_list->parameter_list\n");
}
	;

parameter_list
	: parameter_declaration{
	printf("\tparameter_list->parameter_declaration\n");
}
	| parameter_list ',' parameter_declaration{
	printf("\tparameter_type_list->parameter_list ',' parameter_declaration\n");
}
	;

parameter_declaration
	: declaration_specifiers declarator{
	printf("\tparameter_declaration->declaration_specifiers declarator\n");
}
	| declaration_specifiers abstract_declarator{
	printf("\tparameter_declaration->declaration_specifiers abstract_declarator\n");
}
	| declaration_specifiers{
	printf("\tparameter_declaration->declaration_specifiers\n");
}
	;

identifier_list
	: ID{
	printf("\tidentifier_list->ID\n");
}
	| identifier_list ',' ID{
	printf("\tidentifier_list->identifier_list ',' ID\n");
}
	;

type_name
	: specifier_qualifier_list{
	printf("\ttype_name->specifier_qualifier_list\n");
}
	| specifier_qualifier_list abstract_declarator{
	printf("\ttype_name->specifier_qualifier_list abstract_declarator\n");
}
	;

abstract_declarator
	: pointer{
	printf("\tabstract_declarator->pointer\n");
}
	| direct_abstract_declarator{
	printf("\tabstract_declarator->direct_abstract_declarator\n");
}
	| pointer direct_abstract_declarator{
	printf("\tabstract_declarator->pointer direct_abstract_declarator\n");
}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'{
	printf("\tdirect_abstract_declarator->'(' abstract_declarator ')'\n");
}
	| '[' ']'{
	printf("\tdirect_abstract_declarator->'[' ']'\n");
}
	| '[' constant_expression ']'{
	printf("\tdirect_abstract_declarator->'[' constant_expression ']'\n");
}
	| direct_abstract_declarator '[' ']'{
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '[' ']'\n");
}
	| direct_abstract_declarator '[' constant_expression ']'{
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '[' constant_expression ']'\n");
}
	| '(' ')'{
	printf("\tdirect_abstract_declarator->'(' ')'\n");
}
	| '(' parameter_type_list ')'{
	printf("\tdirect_abstract_declarator->'(' parameter_type_list ')'\n");
}
	| direct_abstract_declarator '(' ')'{
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '(' ')'\n");
}
	| direct_abstract_declarator '(' parameter_type_list ')'{
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '(' parameter_type_list ')'\n");
}
	;

initializer
	: assignment_expression{
	printf("\tinitializer->assignment_expression\n");
}
	| '{' initializer_list '}'{
	printf("\tinitializer->'{' initializer_list '}'\n");
}
	| '{' initializer_list ',' '}'{
	printf("\tinitializer->'{' initializer_list ',' '}'\n");
}
	;

initializer_list
	: initializer{
	printf("\tinitializer_list->initializer\n");
}
	| initializer_list ',' initializer{
	printf("\tinitializer_list->initializer_list ',' initializer\n");
}
	;

statement
	: labeled_statement{
	printf("\tstatement->labeled_statement\n");
}
	| compound_statement{
	printf("\tstatement->compound_statement\n");
}
	| expression_statement{
	printf("\tstatement->expression_statement\n");
}
	| selection_statement{
	printf("\tstatement->selection_statement\n");
}
	| iteration_statement{
	printf("\tstatement->iteration_statement\n");
}
	| jump_statement{
	printf("\tstatement->jump_statement\n");
}
	;

labeled_statement
	: ID ':' statement{
	printf("\tlabeled_statement->ID ':' statement\n");
}
	| CASE constant_expression ':' statement{
	printf("\tlabeled_statement->CASE constant_expression ':' statement\n");
}
	;

compound_statement
	: '{' '}'{
	printf("\tcompound_statement->'{' '}'\n");
}
	| '{' statement_list '}'{
	printf("\tcompound_statement->'{' statement_list '}'\n");
}
	| '{' declaration_list '}'{
	printf("\tcompound_statement->'{' declaration_list '}'\n");
}
	| '{' declaration_list statement_list '}'{
	printf("\tcompound_statement->'{' declaration_list statement_list '}'\n");
}
	;

declaration_list
	: declaration{
	printf("\tdeclaration_list->declaration\n");
}
	| declaration_list declaration{
	printf("\tdeclaration_list->declaration_list declaration\n");
}
	;

statement_list
	: statement{
	printf("\tstatement_list->statement\n");
}
	| statement_list statement{
	printf("\tstatement_list->statement_list statement\n");
}
	;

expression_statement
	: ';'{
	printf("\texpression_statement->';'\n");
}
	| expression ';'{
	printf("\texpression_statement->expression ';'\n");
}
	;

selection_statement
	: IF '(' expression ')' statement{
	printf("\tselection_statement->IF '(' expression ')' statement\n");
}
	| IF '(' expression ')' statement ELSE statement{
	printf("\tselection_statement->IF '(' expression ')' statement ELSE statement\n");
}
	| SWITCH '(' expression ')' statement{
	printf("\tselection_statement->SWITCH '(' expression ')' statement\n");
}
	;

iteration_statement
	: WHILE '(' expression ')' statement{
	printf("\titeration_statement->WHILE '(' expression ')' statement\n");
}
	| DO statement WHILE '(' expression ')' ';'{
	printf("\titeration_statement->DO statement WHILE '(' expression ')' ';'\n");
}
	| FOR '(' expression_statement expression_statement ')' statement{
	printf("\titeration_statement->FOR '(' expression_statement expression_statement ')' statement\n");
}
	| FOR '(' expression_statement expression_statement expression ')' statement{
	printf("\titeration_statement->FOR '(' expression_statement expression_statement expression ')' statement\n");
}
	;

jump_statement
	: CONTINUE ';'{
	printf("\tjump_statement->CONTINUE ';'\n");
}
	| BREAK ';'{
	printf("\tjump_statement->BREAK ';'\n");
}
	| RETURN ';'{
	printf("\tjump_statement->RETURN ';'\n");
}
	| RETURN expression ';'{
	printf("\tjump_statement->RETURN expression ';'\n");
}
	;

translation_unit
	: external_declaration{
	printf("\ttranslation_unit->external_declaration\n");
}
	| translation_unit external_declaration{
	printf("\ttranslation_unit->translation_unit external_declaration\n");
}
	;

external_declaration
	: function_definition{
	printf("\texternal_declaration->function_definition\n");
}
	| declaration{
	printf("\texternal_declaration->declaration\n");
}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement{
	printf("\tfunction_definition->declaration_specifiers declarator declaration_list compound_statement\n");
}
	| declaration_specifiers declarator compound_statement{
	printf("\tfunction_definition->declaration_specifiers declarator compound_statement\n");
}
	| declarator declaration_list compound_statement{
	printf("\tfunction_definition->declarator declaration_list compound_statement\n");
}
	| declarator compound_statement{
	printf("\tfunction_definition->declarator compound_statement\n");
}
	;

%%
 void yyerror (char const *s) {
   printf("ERROR!");
 }
int main(){
	yyparse();
}
