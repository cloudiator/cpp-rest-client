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



#include "Task.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Task::Task()
{
    m_Name = utility::conversions::to_string_t("");
    m_PortsIsSet = false;
    m_InterfacesIsSet = false;
    m_OptimizationIsSet = false;
    m_RequirementsIsSet = false;
}

Task::~Task()
{
}

void Task::validate()
{
    // TODO: implement validation
}

web::json::value Task::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ports )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("ports")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Interfaces )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("interfaces")] = web::json::value::array(jsonArray);
        }
    }
    if(m_OptimizationIsSet)
    {
        val[utility::conversions::to_string_t("optimization")] = ModelBase::toJson(m_Optimization);
    }
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
    val[utility::conversions::to_string_t("taskType")] = ModelBase::toJson(m_TaskType);

    return val;
}

void Task::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    {
        m_Ports.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("ports")))
        {
        for( auto& item : val[utility::conversions::to_string_t("ports")].as_array() )
        {
            if(item.is_null())
            {
                m_Ports.push_back( std::shared_ptr<Port>(nullptr) );
            }
            else
            {
                std::shared_ptr<Port> newItem(new Port());
                newItem->fromJson(item);
                m_Ports.push_back( newItem );
            }
        }
        }
    }
    {
        m_Interfaces.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("interfaces")))
        {
        for( auto& item : val[utility::conversions::to_string_t("interfaces")].as_array() )
        {
            if(item.is_null())
            {
                m_Interfaces.push_back( std::shared_ptr<TaskInterface>(nullptr) );
            }
            else
            {
                std::shared_ptr<TaskInterface> newItem(new TaskInterface());
                newItem->fromJson(item);
                m_Interfaces.push_back( newItem );
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
    std::shared_ptr<TaskType> newTaskType(new TaskType());
    newTaskType->fromJson(val[utility::conversions::to_string_t("taskType")]);
    setTaskType( newTaskType );
}

void Task::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ports )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ports"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Interfaces )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("interfaces"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_OptimizationIsSet)
    {
        if (m_Optimization.get())
        {
            m_Optimization->toMultipart(multipart, utility::conversions::to_string_t("optimization."));
        }
        
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
    m_TaskType->toMultipart(multipart, utility::conversions::to_string_t("taskType."));
}

void Task::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    {
        m_Ports.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("ports")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ports"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Ports.push_back( std::shared_ptr<Port>(nullptr) );
            }
            else
            {
                std::shared_ptr<Port> newItem(new Port());
                newItem->fromJson(item);
                m_Ports.push_back( newItem );
            }
        }
        }
    }
    {
        m_Interfaces.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("interfaces")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("interfaces"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Interfaces.push_back( std::shared_ptr<TaskInterface>(nullptr) );
            }
            else
            {
                std::shared_ptr<TaskInterface> newItem(new TaskInterface());
                newItem->fromJson(item);
                m_Interfaces.push_back( newItem );
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
    std::shared_ptr<TaskType> newTaskType(new TaskType());
    newTaskType->fromMultiPart(multipart, utility::conversions::to_string_t("taskType."));
    setTaskType( newTaskType );
}

utility::string_t Task::getName() const
{
    return m_Name;
}


void Task::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::vector<std::shared_ptr<Port>>& Task::getPorts()
{
    return m_Ports;
}

void Task::setPorts(std::vector<std::shared_ptr<Port>> value)
{
    m_Ports = value;
    m_PortsIsSet = true;
}
bool Task::portsIsSet() const
{
    return m_PortsIsSet;
}

void Task::unsetPorts()
{
    m_PortsIsSet = false;
}

std::vector<std::shared_ptr<TaskInterface>>& Task::getInterfaces()
{
    return m_Interfaces;
}

void Task::setInterfaces(std::vector<std::shared_ptr<TaskInterface>> value)
{
    m_Interfaces = value;
    m_InterfacesIsSet = true;
}
bool Task::interfacesIsSet() const
{
    return m_InterfacesIsSet;
}

void Task::unsetInterfaces()
{
    m_InterfacesIsSet = false;
}

std::shared_ptr<Optimization> Task::getOptimization() const
{
    return m_Optimization;
}


void Task::setOptimization(std::shared_ptr<Optimization> value)
{
    m_Optimization = value;
    m_OptimizationIsSet = true;
}
bool Task::optimizationIsSet() const
{
    return m_OptimizationIsSet;
}

void Task::unsetOptimization()
{
    m_OptimizationIsSet = false;
}

std::vector<std::shared_ptr<Requirement>>& Task::getRequirements()
{
    return m_Requirements;
}

void Task::setRequirements(std::vector<std::shared_ptr<Requirement>> value)
{
    m_Requirements = value;
    m_RequirementsIsSet = true;
}
bool Task::requirementsIsSet() const
{
    return m_RequirementsIsSet;
}

void Task::unsetRequirements()
{
    m_RequirementsIsSet = false;
}

std::shared_ptr<TaskType> Task::getTaskType() const
{
    return m_TaskType;
}


void Task::setTaskType(std::shared_ptr<TaskType> value)
{
    m_TaskType = value;
    
}
}
}
}
}
}

