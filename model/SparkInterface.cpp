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



#include "SparkInterface.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

SparkInterface::SparkInterface()
{
    m_file = utility::conversions::to_string_t("");
    m_fileIsSet = false;
    m_ClassName = utility::conversions::to_string_t("");
    m_ClassNameIsSet = false;
    m_ArgumentsIsSet = false;
    m_SparkArgumentsIsSet = false;
    m_SparkConfigurationIsSet = false;
}

SparkInterface::~SparkInterface()
{
}

void SparkInterface::validate()
{
    // TODO: implement validation
}

web::json::value SparkInterface::toJson() const
{
    web::json::value val = this->TaskInterface::toJson();

    if(m_fileIsSet)
    {
        val[utility::conversions::to_string_t("file")] = ModelBase::toJson(m_file);
    }
    if(m_ClassNameIsSet)
    {
        val[utility::conversions::to_string_t("className")] = ModelBase::toJson(m_ClassName);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arguments )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("arguments")] = web::json::value::array(jsonArray);
        }
    }
    if(m_SparkArgumentsIsSet)
    {
        val[utility::conversions::to_string_t("sparkArguments")] = ModelBase::toJson(m_SparkArguments);
    }
    if(m_SparkConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("sparkConfiguration")] = ModelBase::toJson(m_SparkConfiguration);
    }

    return val;
}

void SparkInterface::fromJson(web::json::value& val)
{
    this->TaskInterface::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("file")))
    {
        setFile(ModelBase::stringFromJson(val[utility::conversions::to_string_t("file")]));
    }
    if(val.has_field(utility::conversions::to_string_t("className")))
    {
        setClassName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("className")]));
    }
    {
        m_Arguments.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("arguments")))
        {
        for( auto& item : val[utility::conversions::to_string_t("arguments")].as_array() )
        {
            m_Arguments.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sparkArguments")))
    {
        if(!val[utility::conversions::to_string_t("sparkArguments")].is_null())
        {
            std::shared_ptr<Map> newItem(new Map());
            newItem->fromJson(val[utility::conversions::to_string_t("sparkArguments")]);
            setSparkArguments( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sparkConfiguration")))
    {
        if(!val[utility::conversions::to_string_t("sparkConfiguration")].is_null())
        {
            std::shared_ptr<Map> newItem(new Map());
            newItem->fromJson(val[utility::conversions::to_string_t("sparkConfiguration")]);
            setSparkConfiguration( newItem );
        }
    }
}

void SparkInterface::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    if(m_fileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("file"), m_file));
        
    }
    if(m_ClassNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("className"), m_ClassName));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arguments )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arguments"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_SparkArgumentsIsSet)
    {
        if (m_SparkArguments.get())
        {
            m_SparkArguments->toMultipart(multipart, utility::conversions::to_string_t("sparkArguments."));
        }
        
    }
    if(m_SparkConfigurationIsSet)
    {
        if (m_SparkConfiguration.get())
        {
            m_SparkConfiguration->toMultipart(multipart, utility::conversions::to_string_t("sparkConfiguration."));
        }
        
    }
}

void SparkInterface::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    if(multipart->hasContent(utility::conversions::to_string_t("file")))
    {
        setFile(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("file"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("className")))
    {
        setClassName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("className"))));
    }
    {
        m_Arguments.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("arguments")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("arguments"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Arguments.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sparkArguments")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sparkArguments")))
        {
            std::shared_ptr<Map> newItem(new Map());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sparkArguments."));
            setSparkArguments( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sparkConfiguration")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sparkConfiguration")))
        {
            std::shared_ptr<Map> newItem(new Map());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sparkConfiguration."));
            setSparkConfiguration( newItem );
        }
    }
}

utility::string_t SparkInterface::getFile() const
{
    return m_file;
}


void SparkInterface::setFile(utility::string_t value)
{
    m_file = value;
    m_fileIsSet = true;
}
bool SparkInterface::fileIsSet() const
{
    return m_fileIsSet;
}

void SparkInterface::unsetfile()
{
    m_fileIsSet = false;
}

utility::string_t SparkInterface::getClassName() const
{
    return m_ClassName;
}


void SparkInterface::setClassName(utility::string_t value)
{
    m_ClassName = value;
    m_ClassNameIsSet = true;
}
bool SparkInterface::classNameIsSet() const
{
    return m_ClassNameIsSet;
}

void SparkInterface::unsetClassName()
{
    m_ClassNameIsSet = false;
}

std::vector<utility::string_t>& SparkInterface::getArguments()
{
    return m_Arguments;
}

void SparkInterface::setArguments(std::vector<utility::string_t> value)
{
    m_Arguments = value;
    m_ArgumentsIsSet = true;
}
bool SparkInterface::argumentsIsSet() const
{
    return m_ArgumentsIsSet;
}

void SparkInterface::unsetArguments()
{
    m_ArgumentsIsSet = false;
}

std::shared_ptr<Map> SparkInterface::getSparkArguments() const
{
    return m_SparkArguments;
}


void SparkInterface::setSparkArguments(std::shared_ptr<Map> value)
{
    m_SparkArguments = value;
    m_SparkArgumentsIsSet = true;
}
bool SparkInterface::sparkArgumentsIsSet() const
{
    return m_SparkArgumentsIsSet;
}

void SparkInterface::unsetSparkArguments()
{
    m_SparkArgumentsIsSet = false;
}

std::shared_ptr<Map> SparkInterface::getSparkConfiguration() const
{
    return m_SparkConfiguration;
}


void SparkInterface::setSparkConfiguration(std::shared_ptr<Map> value)
{
    m_SparkConfiguration = value;
    m_SparkConfigurationIsSet = true;
}
bool SparkInterface::sparkConfigurationIsSet() const
{
    return m_SparkConfigurationIsSet;
}

void SparkInterface::unsetSparkConfiguration()
{
    m_SparkConfigurationIsSet = false;
}

}
}
}
}
}

