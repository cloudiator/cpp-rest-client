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



#include "OCLOptimization.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

OCLOptimization::OCLOptimization()
{
    m_Expression = utility::conversions::to_string_t("");
    m_ExpressionIsSet = false;
}

OCLOptimization::~OCLOptimization()
{
}

void OCLOptimization::validate()
{
    // TODO: implement validation
}

web::json::value OCLOptimization::toJson() const
{
    web::json::value val = this->Optimization::toJson();

    if(m_ExpressionIsSet)
    {
        val[utility::conversions::to_string_t("expression")] = ModelBase::toJson(m_Expression);
    }

    return val;
}

void OCLOptimization::fromJson(web::json::value& val)
{
    this->Optimization::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("expression")))
    {
        setExpression(ModelBase::stringFromJson(val[utility::conversions::to_string_t("expression")]));
    }
}

void OCLOptimization::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    if(m_ObjectiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objective"), m_Objective));
        
    }
    if(m_ExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expression"), m_Expression));
        
    }
}

void OCLOptimization::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    if(multipart->hasContent(utility::conversions::to_string_t("objective")))
    {
        setObjective(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("objective"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("expression")))
    {
        setExpression(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expression"))));
    }
}

utility::string_t OCLOptimization::getExpression() const
{
    return m_Expression;
}


void OCLOptimization::setExpression(utility::string_t value)
{
    m_Expression = value;
    m_ExpressionIsSet = true;
}
bool OCLOptimization::expressionIsSet() const
{
    return m_ExpressionIsSet;
}

void OCLOptimization::unsetExpression()
{
    m_ExpressionIsSet = false;
}

}
}
}
}
}

