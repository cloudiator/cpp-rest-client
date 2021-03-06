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



#include "Node.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Node::Node()
{
    m_NodeId = utility::conversions::to_string_t("");
    m_NodeIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_LoginCredentialIsSet = false;
    m_NodeType = utility::conversions::to_string_t("");
    m_NodeTypeIsSet = false;
    m_IpAddressesIsSet = false;
    m_NodePropertiesIsSet = false;
}

Node::~Node()
{
}

void Node::validate()
{
    // TODO: implement validation
}

web::json::value Node::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NodeIdIsSet)
    {
        val[utility::conversions::to_string_t("nodeId")] = ModelBase::toJson(m_NodeId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_LoginCredentialIsSet)
    {
        val[utility::conversions::to_string_t("loginCredential")] = ModelBase::toJson(m_LoginCredential);
    }
    if(m_NodeTypeIsSet)
    {
        val[utility::conversions::to_string_t("nodeType")] = ModelBase::toJson(m_NodeType);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_IpAddresses )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("ipAddresses")] = web::json::value::array(jsonArray);
        }
    }
    if(m_NodePropertiesIsSet)
    {
        val[utility::conversions::to_string_t("nodeProperties")] = ModelBase::toJson(m_NodeProperties);
    }

    return val;
}

void Node::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("nodeId")))
    {
        setNodeId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("nodeId")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("loginCredential")))
    {
        if(!val[utility::conversions::to_string_t("loginCredential")].is_null())
        {
            std::shared_ptr<LoginCredential> newItem(new LoginCredential());
            newItem->fromJson(val[utility::conversions::to_string_t("loginCredential")]);
            setLoginCredential( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeType")))
    {
        setNodeType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("nodeType")]));
    }
    {
        m_IpAddresses.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("ipAddresses")))
        {
        for( auto& item : val[utility::conversions::to_string_t("ipAddresses")].as_array() )
        {
            if(item.is_null())
            {
                m_IpAddresses.push_back( std::shared_ptr<IpAddress>(nullptr) );
            }
            else
            {
                std::shared_ptr<IpAddress> newItem(new IpAddress());
                newItem->fromJson(item);
                m_IpAddresses.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeProperties")))
    {
        if(!val[utility::conversions::to_string_t("nodeProperties")].is_null())
        {
            std::shared_ptr<NodeProperties> newItem(new NodeProperties());
            newItem->fromJson(val[utility::conversions::to_string_t("nodeProperties")]);
            setNodeProperties( newItem );
        }
    }
}

void Node::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
        
    }
    if(m_LoginCredentialIsSet)
    {
        if (m_LoginCredential.get())
        {
            m_LoginCredential->toMultipart(multipart, utility::conversions::to_string_t("loginCredential."));
        }
        
    }
    if(m_NodeTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeType"), m_NodeType));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_IpAddresses )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipAddresses"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_NodePropertiesIsSet)
    {
        if (m_NodeProperties.get())
        {
            m_NodeProperties->toMultipart(multipart, utility::conversions::to_string_t("nodeProperties."));
        }
        
    }
}

void Node::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        setNodeId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("loginCredential")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("loginCredential")))
        {
            std::shared_ptr<LoginCredential> newItem(new LoginCredential());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("loginCredential."));
            setLoginCredential( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeType")))
    {
        setNodeType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeType"))));
    }
    {
        m_IpAddresses.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("ipAddresses")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipAddresses"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_IpAddresses.push_back( std::shared_ptr<IpAddress>(nullptr) );
            }
            else
            {
                std::shared_ptr<IpAddress> newItem(new IpAddress());
                newItem->fromJson(item);
                m_IpAddresses.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeProperties")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("nodeProperties")))
        {
            std::shared_ptr<NodeProperties> newItem(new NodeProperties());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("nodeProperties."));
            setNodeProperties( newItem );
        }
    }
}

utility::string_t Node::getNodeId() const
{
    return m_NodeId;
}


void Node::setNodeId(utility::string_t value)
{
    m_NodeId = value;
    m_NodeIdIsSet = true;
}
bool Node::nodeIdIsSet() const
{
    return m_NodeIdIsSet;
}

void Node::unsetNodeId()
{
    m_NodeIdIsSet = false;
}

utility::string_t Node::getName() const
{
    return m_Name;
}


void Node::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Node::nameIsSet() const
{
    return m_NameIsSet;
}

void Node::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<LoginCredential> Node::getLoginCredential() const
{
    return m_LoginCredential;
}


void Node::setLoginCredential(std::shared_ptr<LoginCredential> value)
{
    m_LoginCredential = value;
    m_LoginCredentialIsSet = true;
}
bool Node::loginCredentialIsSet() const
{
    return m_LoginCredentialIsSet;
}

void Node::unsetLoginCredential()
{
    m_LoginCredentialIsSet = false;
}

utility::string_t Node::getNodeType() const
{
    return m_NodeType;
}


void Node::setNodeType(utility::string_t value)
{
    m_NodeType = value;
    m_NodeTypeIsSet = true;
}
bool Node::nodeTypeIsSet() const
{
    return m_NodeTypeIsSet;
}

void Node::unsetNodeType()
{
    m_NodeTypeIsSet = false;
}

std::vector<std::shared_ptr<IpAddress>>& Node::getIpAddresses()
{
    return m_IpAddresses;
}

void Node::setIpAddresses(std::vector<std::shared_ptr<IpAddress>> value)
{
    m_IpAddresses = value;
    m_IpAddressesIsSet = true;
}
bool Node::ipAddressesIsSet() const
{
    return m_IpAddressesIsSet;
}

void Node::unsetIpAddresses()
{
    m_IpAddressesIsSet = false;
}

std::shared_ptr<NodeProperties> Node::getNodeProperties() const
{
    return m_NodeProperties;
}


void Node::setNodeProperties(std::shared_ptr<NodeProperties> value)
{
    m_NodeProperties = value;
    m_NodePropertiesIsSet = true;
}
bool Node::nodePropertiesIsSet() const
{
    return m_NodePropertiesIsSet;
}

void Node::unsetNodeProperties()
{
    m_NodePropertiesIsSet = false;
}

}
}
}
}
}

