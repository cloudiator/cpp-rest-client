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



#include "Cloud.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Cloud::Cloud()
{
    m_Endpoint = utility::conversions::to_string_t("");
    m_EndpointIsSet = false;
    m_CloudConfigurationIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Diagnostic = utility::conversions::to_string_t("");
    m_DiagnosticIsSet = false;
}

Cloud::~Cloud()
{
}

void Cloud::validate()
{
    // TODO: implement validation
}

web::json::value Cloud::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EndpointIsSet)
    {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(m_Endpoint);
    }
    val[utility::conversions::to_string_t("cloudType")] = ModelBase::toJson(m_CloudType);
    val[utility::conversions::to_string_t("api")] = ModelBase::toJson(m_Api);
    val[utility::conversions::to_string_t("credential")] = ModelBase::toJson(m_Credential);
    if(m_CloudConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("cloudConfiguration")] = ModelBase::toJson(m_CloudConfiguration);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_DiagnosticIsSet)
    {
        val[utility::conversions::to_string_t("diagnostic")] = ModelBase::toJson(m_Diagnostic);
    }

    return val;
}

void Cloud::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("endpoint")))
    {
        setEndpoint(ModelBase::stringFromJson(val[utility::conversions::to_string_t("endpoint")]));
    }
    std::shared_ptr<CloudType> newCloudType(new CloudType());
    newCloudType->fromJson(val[utility::conversions::to_string_t("cloudType")]);
    setCloudType( newCloudType );
    std::shared_ptr<Api> newApi(new Api());
    newApi->fromJson(val[utility::conversions::to_string_t("api")]);
    setApi( newApi );
    std::shared_ptr<CloudCredential> newCredential(new CloudCredential());
    newCredential->fromJson(val[utility::conversions::to_string_t("credential")]);
    setCredential( newCredential );
    if(val.has_field(utility::conversions::to_string_t("cloudConfiguration")))
    {
        if(!val[utility::conversions::to_string_t("cloudConfiguration")].is_null())
        {
            std::shared_ptr<CloudConfiguration> newItem(new CloudConfiguration());
            newItem->fromJson(val[utility::conversions::to_string_t("cloudConfiguration")]);
            setCloudConfiguration( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromJson(val[utility::conversions::to_string_t("state")]));
    }
    if(val.has_field(utility::conversions::to_string_t("diagnostic")))
    {
        setDiagnostic(ModelBase::stringFromJson(val[utility::conversions::to_string_t("diagnostic")]));
    }
}

void Cloud::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_EndpointIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endpoint"), m_Endpoint));
        
    }
    m_CloudType->toMultipart(multipart, utility::conversions::to_string_t("cloudType."));
    m_Api->toMultipart(multipart, utility::conversions::to_string_t("api."));
    m_Credential->toMultipart(multipart, utility::conversions::to_string_t("credential."));
    if(m_CloudConfigurationIsSet)
    {
        if (m_CloudConfiguration.get())
        {
            m_CloudConfiguration->toMultipart(multipart, utility::conversions::to_string_t("cloudConfiguration."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
        
    }
    if(m_DiagnosticIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("diagnostic"), m_Diagnostic));
        
    }
}

void Cloud::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("endpoint")))
    {
        setEndpoint(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("endpoint"))));
    }
    std::shared_ptr<CloudType> newCloudType(new CloudType());
    newCloudType->fromMultiPart(multipart, utility::conversions::to_string_t("cloudType."));
    setCloudType( newCloudType );
    std::shared_ptr<Api> newApi(new Api());
    newApi->fromMultiPart(multipart, utility::conversions::to_string_t("api."));
    setApi( newApi );
    std::shared_ptr<CloudCredential> newCredential(new CloudCredential());
    newCredential->fromMultiPart(multipart, utility::conversions::to_string_t("credential."));
    setCredential( newCredential );
    if(multipart->hasContent(utility::conversions::to_string_t("cloudConfiguration")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cloudConfiguration")))
        {
            std::shared_ptr<CloudConfiguration> newItem(new CloudConfiguration());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cloudConfiguration."));
            setCloudConfiguration( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("diagnostic")))
    {
        setDiagnostic(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("diagnostic"))));
    }
}

utility::string_t Cloud::getEndpoint() const
{
    return m_Endpoint;
}


void Cloud::setEndpoint(utility::string_t value)
{
    m_Endpoint = value;
    m_EndpointIsSet = true;
}
bool Cloud::endpointIsSet() const
{
    return m_EndpointIsSet;
}

void Cloud::unsetEndpoint()
{
    m_EndpointIsSet = false;
}

std::shared_ptr<CloudType> Cloud::getCloudType() const
{
    return m_CloudType;
}


void Cloud::setCloudType(std::shared_ptr<CloudType> value)
{
    m_CloudType = value;
    
}
std::shared_ptr<Api> Cloud::getApi() const
{
    return m_Api;
}


void Cloud::setApi(std::shared_ptr<Api> value)
{
    m_Api = value;
    
}
std::shared_ptr<CloudCredential> Cloud::getCredential() const
{
    return m_Credential;
}


void Cloud::setCredential(std::shared_ptr<CloudCredential> value)
{
    m_Credential = value;
    
}
std::shared_ptr<CloudConfiguration> Cloud::getCloudConfiguration() const
{
    return m_CloudConfiguration;
}


void Cloud::setCloudConfiguration(std::shared_ptr<CloudConfiguration> value)
{
    m_CloudConfiguration = value;
    m_CloudConfigurationIsSet = true;
}
bool Cloud::cloudConfigurationIsSet() const
{
    return m_CloudConfigurationIsSet;
}

void Cloud::unsetCloudConfiguration()
{
    m_CloudConfigurationIsSet = false;
}

utility::string_t Cloud::getId() const
{
    return m_Id;
}


void Cloud::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Cloud::idIsSet() const
{
    return m_IdIsSet;
}

void Cloud::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Cloud::getState() const
{
    return m_State;
}


void Cloud::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool Cloud::stateIsSet() const
{
    return m_StateIsSet;
}

void Cloud::unsetState()
{
    m_StateIsSet = false;
}

utility::string_t Cloud::getDiagnostic() const
{
    return m_Diagnostic;
}


void Cloud::setDiagnostic(utility::string_t value)
{
    m_Diagnostic = value;
    m_DiagnosticIsSet = true;
}
bool Cloud::diagnosticIsSet() const
{
    return m_DiagnosticIsSet;
}

void Cloud::unsetDiagnostic()
{
    m_DiagnosticIsSet = false;
}

}
}
}
}
}

