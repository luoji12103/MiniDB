// commands names
static const string CD = "CREATE DATABASE";
static const string UD = "USE DATABASE";
static const string CT = "CREATE TABLE";
static const string DT = "DROP TABLE";
static const string type_int = "INTEGER";
static const string type_float = "FLOAT";
static const string type_string = "TEXT";

// table data type
struct Table_data
{
    string column_name;
        union
        {
            int column_integer;
            float column_float;
            string column_text;
        } column_type;
};
class Table
{
    public:
        string table_name;
    private:
        vector <Table_data> table_data_class;
};