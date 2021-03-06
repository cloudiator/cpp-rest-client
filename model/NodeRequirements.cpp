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



#include "NodeRequirements.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

NodeRequirements::NodeRequirements()
{
    m_RequirementsIsSet = false;
    m_OptimizationIsSet = false;
}

NodeRequirements::~NodeRequirements()
{
}

void NodeRequirements::validate()
{
    // TODO: implement validation
}

web::json::value NodeRequirements::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Requirements )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("requirements")] = web::json::value::array(jsonArray);
        }
    }
    if(m_OptimizationIsSet)
    {
        val[utility::conversions::to_string_t("optimization")] = ModelBase::toJson(m_Optimization);
    }

    return val;
}

void NodeRequirements::fromJson(web::json::value& val)
{
    {
        m_Requirements.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("requirements")))
        {
        for( auto& item : val[utility::conversions::to_string_t("requirements")].as_array() )
        {
            if(item.is_null())
            {
                m_Requirements.push_back( std::shared_ptr<Requirement>(nullptr) );
            }
            else
            {
                std::shared_ptr<Requirement> newItem(new Requirement());
                newItem->fromJson(item);
                m_Requirements.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optimization")))
    {
        if(!val[utility::conversions::to_string_t("optimization")].is_null())
        {
            std::shared_ptr<Optimization> newItem(new Optimization());
            newItem->fromJson(val[utility::conversions::to_string_t("optimization")]);
            setOptimization( newItem );
        }
    }
}

void NodeRequirements::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Requirements )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("requirements"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_OptimizationIsSet)
    {
        if (m_Optimization.get())
        {
            m_Optimization->toMultipart(multipart, utility::conversions::to_string_t("optimization."));
        }
        
    }
}

void NodeRequirements::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Requirements.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("requirements")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("requirements"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Requirements.push_back( std::shared_ptr<Requirement>(nullptr) );
            }
            else
            {
                std::shared_ptr<Requirement> newItem(new Requirement());
                newItem->fromJson(item);
                m_Requirements.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("optimization")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("optimization")))
        {
            std::shared_ptr<Optimization> newItem(new Optimization());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("optimization."));
            setOptimization( newItem );
        }
    }
}

std::vector<std::shared_ptr<Requirement>>& NodeRequirements::getRequirements()
{
    return m_Requirements;
}

void NodeRequirements::setRequirements(std::vector<std::shared_ptr<Requirement>> value)
{
    m_Requirements = value;
    m_RequirementsIsSet = true;
}
bool NodeRequirements::requirementsIsSet() const
{
    return m_RequirementsIsSet;
}

void NodeRequirements::unsetRequirements()
{
    m_RequirementsIsSet = false;
}

std::shared_ptr<Optimization> NodeRequirements::getOptimization() const
{
    return m_Optimization;
}


void NodeRequirements::setOptimization(std::shared_ptr<Optimization> value)
{
    m_Optimization = value;
    m_OptimizationIsSet = true;
}
bool NodeRequirements::optimizationIsSet() const
{
    return m_OptimizationIsSet;
}

void NodeRequirements::unsetOptimization()
{
    m_OptimizationIsSet = false;
}

}
}
}
}
}

