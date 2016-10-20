/*
 * Programmer: Kyle Kloberdanz
 * Date:       20 Oct 2016
 *
 * To Compile: Use a compiler with support for C++11 or higher!
 *             (Tested using C++14)
 */

#include <iostream>
#include <cstdint>
#include <vector>


class Fizzbuzz {
  public:
    Fizzbuzz() {
        ;
    }

    void run(uint64_t n) {
        for (int i = 1; i <= n; ++i) {
            bool print_num = true;
            for (auto r : rules_v) {
                if (i % r.val == 0) {
                    print_num = false;
                    std::cout << r.str_out;
                }
            }
            if (print_num) {
                std::cout << i << std::endl;;
            } else {
                std::cout << std::endl;
            }
        }
    }

    void add_rule(std::string s, uint64_t v) {
        struct Rules r;
        r.str_out = s;
        r.val = v;
        rules_v.push_back(r);
    }

    void add_rule(uint64_t v, std::string s) {
        add_rule(s, v);
    }

  private:

    struct Rules {
        std::string str_out;
        uint64_t    val;
    };

    std::vector<struct Rules> rules_v;
};

bool is_int(std::string s) {
    for (const char& c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int as_int(std::string s) {
    return atoi(s.c_str());
}

int main() {

    Fizzbuzz fb;
    fb.add_rule("fizz", 3);
    fb.add_rule(5, "buzz");

    std::string user_input = "a";
    while (user_input != "q") {
        std::cout << "Number to go to: " << std::endl;
        std::cin >> user_input; 

        if (is_int(user_input)) {
            uint64_t n = as_int(user_input);
            std::cout << "----------------" << std::endl;
            fb.run(n);

        } else if (user_input == "add_rule") {
            std::string rule_str;
            uint64_t    rule_int;
            std::cout << "Rule: ";
            std::cin  >> rule_str;
            std::cout << "Value: ";
            std::cin  >> rule_int; 

            fb.add_rule(rule_str, rule_int);

        } else if (user_input == "q") {
            std::exit(EXIT_SUCCESS);

        } else {
            std::cout << "error: '" << user_input << 
                "' was not understood" << std::endl;
        }
    }
}
