/**
 * Cloudiator REST Api
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.2.0
 * Contact: daniel.baur@uni-ulm.de
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "IpAddressType.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

IpAddressType::IpAddressType()
{
}

IpAddressType::~IpAddressType()
{
}

void IpAddressType::validate()
{
    // TODO: implement validation
}

web::json::value IpAddressType::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}

void IpAddressType::fromJson(web::json::value& val)
{
}

void IpAddressType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void IpAddressType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

}
}
}
}
}

