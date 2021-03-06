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



#include "Process.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Process::Process()
{
    m_Schedule = utility::conversions::to_string_t("");
    m_Task = utility::conversions::to_string_t("");
    m_Node = utility::conversions::to_string_t("");
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
}

Process::~Process()
{
}

void Process::validate()
{
    // TODO: implement validation
}

web::json::value Process::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(m_Schedule);
    val[utility::conversions::to_string_t("task")] = ModelBase::toJson(m_Task);
    val[utility::conversions::to_string_t("node")] = ModelBase::toJson(m_Node);
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void Process::fromJson(web::json::value& val)
{
    setSchedule(ModelBase::stringFromJson(val[utility::conversions::to_string_t("schedule")]));
    setTask(ModelBase::stringFromJson(val[utility::conversions::to_string_t("task")]));
    setNode(ModelBase::stringFromJson(val[utility::conversions::to_string_t("node")]));
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("type")]));
    }
}

void Process::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("schedule"), m_Schedule));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("task"), m_Task));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("node"), m_Node));
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
        
    }
}

void Process::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setSchedule(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("schedule"))));
    setTask(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("task"))));
    setNode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("node"))));
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    }
}

utility::string_t Process::getSchedule() const
{
    return m_Schedule;
}


void Process::setSchedule(utility::string_t value)
{
    m_Schedule = value;
    
}
utility::string_t Process::getTask() const
{
    return m_Task;
}


void Process::setTask(utility::string_t value)
{
    m_Task = value;
    
}
utility::string_t Process::getNode() const
{
    return m_Node;
}


void Process::setNode(utility::string_t value)
{
    m_Node = value;
    
}
utility::string_t Process::getId() const
{
    return m_Id;
}


void Process::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Process::idIsSet() const
{
    return m_IdIsSet;
}

void Process::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Process::getType() const
{
    return m_Type;
}


void Process::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Process::typeIsSet() const
{
    return m_TypeIsSet;
}

void Process::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}
}

