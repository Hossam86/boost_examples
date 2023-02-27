#include <iostream>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>


struct employee {
    int id;
    std::string name;

    employee(int id, const std::string &name) : id(id), name(name) {}

    bool operator<(const employee &e) const { return id < e.id; }
};

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>

// define a multiply indexed set with indices by id and name
typedef multi_index_container <
        employee,
        indexed_by<
        // sort by employee::operator<
        ordered_unique < identity < employee>>,
// sort by less<string> on name
ordered_non_unique <member<employee, std::string, &employee::name>>>
>employee_set;

int main()
{

}