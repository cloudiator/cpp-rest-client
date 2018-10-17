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



#include "Token.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Token::Token()
{
    m_Token = utility::conversions::to_string_t("");
    m_Owner = utility::conversions::to_string_t("");
    m_OwnerIsSet = false;
    m_IssuedTime = 0L;
    m_IssuedTimeIsSet = false;
    m_ExpireTime = 0L;
    m_ExpireTimeIsSet = false;
}

Token::~Token()
{
}

void Token::validate()
{
    // TODO: implement validation
}

web::json::value Token::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    }
    if(m_IssuedTimeIsSet)
    {
        val[utility::conversions::to_string_t("issuedTime")] = ModelBase::toJson(m_IssuedTime);
    }
    if(m_ExpireTimeIsSet)
    {
        val[utility::conversions::to_string_t("expireTime")] = ModelBase::toJson(m_ExpireTime);
    }

    return val;
}

void Token::fromJson(web::json::value& val)
{
    setToken(ModelBase::stringFromJson(val[utility::conversions::to_string_t("token")]));
    if(val.has_field(utility::conversions::to_string_t("owner")))
    {
        setOwner(ModelBase::stringFromJson(val[utility::conversions::to_string_t("owner")]));
    }
    if(val.has_field(utility::conversions::to_string_t("issuedTime")))
    {
        setIssuedTime(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("issuedTime")]));
    }
    if(val.has_field(utility::conversions::to_string_t("expireTime")))
    {
        setExpireTime(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("expireTime")]));
    }
}

void Token::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
        
    }
    if(m_IssuedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("issuedTime"), m_IssuedTime));
    }
    if(m_ExpireTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expireTime"), m_ExpireTime));
    }
}

void Token::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setToken(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("token"))));
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        setOwner(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("issuedTime")))
    {
        setIssuedTime(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("issuedTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("expireTime")))
    {
        setExpireTime(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expireTime"))));
    }
}

utility::string_t Token::getToken() const
{
    return m_Token;
}


void Token::setToken(utility::string_t value)
{
    m_Token = value;
    
}
utility::string_t Token::getOwner() const
{
    return m_Owner;
}


void Token::setOwner(utility::string_t value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool Token::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void Token::unsetOwner()
{
    m_OwnerIsSet = false;
}

int64_t Token::getIssuedTime() const
{
    return m_IssuedTime;
}


void Token::setIssuedTime(int64_t value)
{
    m_IssuedTime = value;
    m_IssuedTimeIsSet = true;
}
bool Token::issuedTimeIsSet() const
{
    return m_IssuedTimeIsSet;
}

void Token::unsetIssuedTime()
{
    m_IssuedTimeIsSet = false;
}

int64_t Token::getExpireTime() const
{
    return m_ExpireTime;
}


void Token::setExpireTime(int64_t value)
{
    m_ExpireTime = value;
    m_ExpireTimeIsSet = true;
}
bool Token::expireTimeIsSet() const
{
    return m_ExpireTimeIsSet;
}

void Token::unsetExpireTime()
{
    m_ExpireTimeIsSet = false;
}

}
}
}
}
}
