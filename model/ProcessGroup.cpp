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



#include "ProcessGroup.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

ProcessGroup::ProcessGroup()
{
    m_Id = utility::conversions::to_string_t("");
}

ProcessGroup::~ProcessGroup()
{
}

void ProcessGroup::validate()
{
    // TODO: implement validation
}

web::json::value ProcessGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Processes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("processes")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ProcessGroup::fromJson(web::json::value& val)
{
    setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    {
        m_Processes.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("processes")].as_array() )
        {
            if(item.is_null())
            {
                m_Processes.push_back( std::shared_ptr<Process>(nullptr) );
            }
            else
            {
                std::shared_ptr<Process> newItem(new Process());
                newItem->fromJson(item);
                m_Processes.push_back( newItem );
            }
        }
    }
}

void ProcessGroup::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Processes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("processes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void ProcessGroup::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    {
        m_Processes.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("processes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Processes.push_back( std::shared_ptr<Process>(nullptr) );
            }
            else
            {
                std::shared_ptr<Process> newItem(new Process());
                newItem->fromJson(item);
                m_Processes.push_back( newItem );
            }
        }
    }
}

utility::string_t ProcessGroup::getId() const
{
    return m_Id;
}


void ProcessGroup::setId(utility::string_t value)
{
    m_Id = value;
    
}
std::vector<std::shared_ptr<Process>>& ProcessGroup::getProcesses()
{
    return m_Processes;
}

void ProcessGroup::setProcesses(std::vector<std::shared_ptr<Process>> value)
{
    m_Processes = value;
    
}
}
}
}
}
}

