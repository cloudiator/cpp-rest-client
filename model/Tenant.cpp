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



#include "Tenant.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Tenant::Tenant()
{
    m_Tenant = utility::conversions::to_string_t("");
}

Tenant::~Tenant()
{
}

void Tenant::validate()
{
    // TODO: implement validation
}

web::json::value Tenant::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("tenant")] = ModelBase::toJson(m_Tenant);

    return val;
}

void Tenant::fromJson(web::json::value& val)
{
    setTenant(ModelBase::stringFromJson(val[utility::conversions::to_string_t("tenant")]));
}

void Tenant::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tenant"), m_Tenant));
}

void Tenant::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setTenant(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tenant"))));
}

utility::string_t Tenant::getTenant() const
{
    return m_Tenant;
}


void Tenant::setTenant(utility::string_t value)
{
    m_Tenant = value;
    
}
}
}
}
}
}

