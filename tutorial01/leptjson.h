#ifndef LEPTJSON_H__  //定义宏定义  以_H__作为后缀  标准格式是：项目名称_目录_文件名称_H__
#define LEPTJSON_H__

typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;
//声明了一个枚举类型   这里的枚举类型标准形式：c语言，typedef 用于为 enum 创建一个新的类型别名 lept_type
typedef struct {
    lept_type type;
}lept_value;  //lept_value是该结构体的别名
//这里type就是lept_type 类型的变量，可以使用枚举中的7个变量
enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

int lept_parse(lept_value* v, const char* json);


lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
