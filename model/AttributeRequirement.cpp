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



#include "AttributeRequirement.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

AttributeRequirement::AttributeRequirement()
{
    m_RequirementClass = utility::conversions::to_string_t("");
    m_RequirementClassIsSet = false;
    m_RequirementAttribute = utility::conversions::to_string_t("");
    m_RequirementAttributeIsSet = false;
    m_RequirementOperatorIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

AttributeRequirement::~AttributeRequirement()
{
}

void AttributeRequirement::validate()
{
    // TODO: implement validation
}

web::json::value AttributeRequirement::toJson() const
{
    web::json::value val = this->Requirement::toJson();

    if(m_RequirementClassIsSet)
    {
        val[utility::conversions::to_string_t("requirementClass")] = ModelBase::toJson(m_RequirementClass);
    }
    if(m_RequirementAttributeIsSet)
    {
        val[utility::conversions::to_string_t("requirementAttribute")] = ModelBase::toJson(m_RequirementAttribute);
    }
    if(m_RequirementOperatorIsSet)
    {
        val[utility::conversions::to_string_t("requirementOperator")] = ModelBase::toJson(m_RequirementOperator);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void AttributeRequirement::fromJson(web::json::value& val)
{
    this->Requirement::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("requirementClass")))
    {
        setRequirementClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("requirementClass")]));
    }
    if(val.has_field(utility::conversions::to_string_t("requirementAttribute")))
    {
        setRequirementAttribute(ModelBase::stringFromJson(val[utility::conversions::to_string_t("requirementAttribute")]));
    }
    if(val.has_field(utility::conversions::to_string_t("requirementOperator")))
    {
        if(!val[utility::conversions::to_string_t("requirementOperator")].is_null())
        {
            std::shared_ptr<RequirementOperator> newItem(new RequirementOperator());
            newItem->fromJson(val[utility::conversions::to_string_t("requirementOperator")]);
            setRequirementOperator( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromJson(val[utility::conversions::to_string_t("value")]));
    }
}

void AttributeRequirement::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    if(m_RequirementClassIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("requirementClass"), m_RequirementClass));
        
    }
    if(m_RequirementAttributeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("requirementAttribute"), m_RequirementAttribute));
        
    }
    if(m_RequirementOperatorIsSet)
    {
        if (m_RequirementOperator.get())
        {
            m_RequirementOperator->toMultipart(multipart, utility::conversions::to_string_t("requirementOperator."));
        }
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
        
    }
}

void AttributeRequirement::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    if(multipart->hasContent(utility::conversions::to_string_t("requirementClass")))
    {
        setRequirementClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("requirementClass"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("requirementAttribute")))
    {
        setRequirementAttribute(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("requirementAttribute"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("requirementOperator")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("requirementOperator")))
        {
            std::shared_ptr<RequirementOperator> newItem(new RequirementOperator());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("requirementOperator."));
            setRequirementOperator( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    }
}

utility::string_t AttributeRequirement::getRequirementClass() const
{
    return m_RequirementClass;
}


void AttributeRequirement::setRequirementClass(utility::string_t value)
{
    m_RequirementClass = value;
    m_RequirementClassIsSet = true;
}
bool AttributeRequirement::requirementClassIsSet() const
{
    return m_RequirementClassIsSet;
}

void AttributeRequirement::unsetRequirementClass()
{
    m_RequirementClassIsSet = false;
}

utility::string_t AttributeRequirement::getRequirementAttribute() const
{
    return m_RequirementAttribute;
}


void AttributeRequirement::setRequirementAttribute(utility::string_t value)
{
    m_RequirementAttribute = value;
    m_RequirementAttributeIsSet = true;
}
bool AttributeRequirement::requirementAttributeIsSet() const
{
    return m_RequirementAttributeIsSet;
}

void AttributeRequirement::unsetRequirementAttribute()
{
    m_RequirementAttributeIsSet = false;
}

std::shared_ptr<RequirementOperator> AttributeRequirement::getRequirementOperator() const
{
    return m_RequirementOperator;
}


void AttributeRequirement::setRequirementOperator(std::shared_ptr<RequirementOperator> value)
{
    m_RequirementOperator = value;
    m_RequirementOperatorIsSet = true;
}
bool AttributeRequirement::requirementOperatorIsSet() const
{
    return m_RequirementOperatorIsSet;
}

void AttributeRequirement::unsetRequirementOperator()
{
    m_RequirementOperatorIsSet = false;
}

utility::string_t AttributeRequirement::getValue() const
{
    return m_Value;
}


void AttributeRequirement::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool AttributeRequirement::valueIsSet() const
{
    return m_ValueIsSet;
}

void AttributeRequirement::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}
}

