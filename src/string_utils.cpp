#include "string_utils.h"

#include <boost/algorithm/string.hpp>

std::string StringUtils::ToUpper(const std::string &input) {
    std::string result{input};
    boost::to_upper(result);

    return result;
}