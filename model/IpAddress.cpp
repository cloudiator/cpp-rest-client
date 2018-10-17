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



#include "IpAddress.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

IpAddress::IpAddress()
{
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

IpAddress::~IpAddress()
{
}

void IpAddress::validate()
{
    // TODO: implement validation
}

web::json::value IpAddress::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("IpAddressType")] = ModelBase::toJson(m_IpAddressType);
    val[utility::conversions::to_string_t("IpVersion")] = ModelBase::toJson(m_IpVersion);
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void IpAddress::fromJson(web::json::value& val)
{
    std::shared_ptr<IpAddressType> newIpAddressType(new IpAddressType());
    newIpAddressType->fromJson(val[utility::conversions::to_string_t("IpAddressType")]);
    setIpAddressType( newIpAddressType );
    std::shared_ptr<IpVersion> newIpVersion(new IpVersion());
    newIpVersion->fromJson(val[utility::conversions::to_string_t("IpVersion")]);
    setIpVersion( newIpVersion );
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromJson(val[utility::conversions::to_string_t("value")]));
    }
}

void IpAddress::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_IpAddressType->toMultipart(multipart, utility::conversions::to_string_t("IpAddressType."));
    m_IpVersion->toMultipart(multipart, utility::conversions::to_string_t("IpVersion."));
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
        
    }
}

void IpAddress::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<IpAddressType> newIpAddressType(new IpAddressType());
    newIpAddressType->fromMultiPart(multipart, utility::conversions::to_string_t("IpAddressType."));
    setIpAddressType( newIpAddressType );
    std::shared_ptr<IpVersion> newIpVersion(new IpVersion());
    newIpVersion->fromMultiPart(multipart, utility::conversions::to_string_t("IpVersion."));
    setIpVersion( newIpVersion );
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    }
}

std::shared_ptr<IpAddressType> IpAddress::getIpAddressType() const
{
    return m_IpAddressType;
}


void IpAddress::setIpAddressType(std::shared_ptr<IpAddressType> value)
{
    m_IpAddressType = value;
    
}
std::shared_ptr<IpVersion> IpAddress::getIpVersion() const
{
    return m_IpVersion;
}


void IpAddress::setIpVersion(std::shared_ptr<IpVersion> value)
{
    m_IpVersion = value;
    
}
utility::string_t IpAddress::getValue() const
{
    return m_Value;
}


void IpAddress::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool IpAddress::valueIsSet() const
{
    return m_ValueIsSet;
}

void IpAddress::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}
}

