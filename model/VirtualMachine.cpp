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



#include "VirtualMachine.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

VirtualMachine::VirtualMachine()
{
    m_ImageIsSet = false;
    m_HardwareIsSet = false;
    m_LocationIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_IpaddressesIsSet = false;
    m_LogincredentialIsSet = false;
}

VirtualMachine::~VirtualMachine()
{
}

void VirtualMachine::validate()
{
    // TODO: implement validation
}

web::json::value VirtualMachine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }
    if(m_HardwareIsSet)
    {
        val[utility::conversions::to_string_t("hardware")] = ModelBase::toJson(m_Hardware);
    }
    if(m_LocationIsSet)
    {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(m_Location);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ipaddresses )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("ipaddresses")] = web::json::value::array(jsonArray);
        }
    }
    if(m_LogincredentialIsSet)
    {
        val[utility::conversions::to_string_t("logincredential")] = ModelBase::toJson(m_Logincredential);
    }

    return val;
}

void VirtualMachine::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("image")))
    {
        if(!val[utility::conversions::to_string_t("image")].is_null())
        {
            std::shared_ptr<Image> newItem(new Image());
            newItem->fromJson(val[utility::conversions::to_string_t("image")]);
            setImage( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hardware")))
    {
        if(!val[utility::conversions::to_string_t("hardware")].is_null())
        {
            std::shared_ptr<Hardware> newItem(new Hardware());
            newItem->fromJson(val[utility::conversions::to_string_t("hardware")]);
            setHardware( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location")))
    {
        if(!val[utility::conversions::to_string_t("location")].is_null())
        {
            std::shared_ptr<Location> newItem(new Location());
            newItem->fromJson(val[utility::conversions::to_string_t("location")]);
            setLocation( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    {
        m_Ipaddresses.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("ipaddresses")))
        {
        for( auto& item : val[utility::conversions::to_string_t("ipaddresses")].as_array() )
        {
            if(item.is_null())
            {
                m_Ipaddresses.push_back( std::shared_ptr<IpAddress>(nullptr) );
            }
            else
            {
                std::shared_ptr<IpAddress> newItem(new IpAddress());
                newItem->fromJson(item);
                m_Ipaddresses.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logincredential")))
    {
        if(!val[utility::conversions::to_string_t("logincredential")].is_null())
        {
            std::shared_ptr<LoginCredential> newItem(new LoginCredential());
            newItem->fromJson(val[utility::conversions::to_string_t("logincredential")]);
            setLogincredential( newItem );
        }
    }
}

void VirtualMachine::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ImageIsSet)
    {
        if (m_Image.get())
        {
            m_Image->toMultipart(multipart, utility::conversions::to_string_t("image."));
        }
        
    }
    if(m_HardwareIsSet)
    {
        if (m_Hardware.get())
        {
            m_Hardware->toMultipart(multipart, utility::conversions::to_string_t("hardware."));
        }
        
    }
    if(m_LocationIsSet)
    {
        if (m_Location.get())
        {
            m_Location->toMultipart(multipart, utility::conversions::to_string_t("location."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ipaddresses )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipaddresses"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_LogincredentialIsSet)
    {
        if (m_Logincredential.get())
        {
            m_Logincredential->toMultipart(multipart, utility::conversions::to_string_t("logincredential."));
        }
        
    }
}

void VirtualMachine::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("image")))
        {
            std::shared_ptr<Image> newItem(new Image());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("image."));
            setImage( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hardware")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("hardware")))
        {
            std::shared_ptr<Hardware> newItem(new Hardware());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("hardware."));
            setHardware( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("location")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("location")))
        {
            std::shared_ptr<Location> newItem(new Location());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("location."));
            setLocation( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    {
        m_Ipaddresses.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("ipaddresses")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipaddresses"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Ipaddresses.push_back( std::shared_ptr<IpAddress>(nullptr) );
            }
            else
            {
                std::shared_ptr<IpAddress> newItem(new IpAddress());
                newItem->fromJson(item);
                m_Ipaddresses.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("logincredential")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("logincredential")))
        {
            std::shared_ptr<LoginCredential> newItem(new LoginCredential());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("logincredential."));
            setLogincredential( newItem );
        }
    }
}

std::shared_ptr<Image> VirtualMachine::getImage() const
{
    return m_Image;
}


void VirtualMachine::setImage(std::shared_ptr<Image> value)
{
    m_Image = value;
    m_ImageIsSet = true;
}
bool VirtualMachine::imageIsSet() const
{
    return m_ImageIsSet;
}

void VirtualMachine::unsetImage()
{
    m_ImageIsSet = false;
}

std::shared_ptr<Hardware> VirtualMachine::getHardware() const
{
    return m_Hardware;
}


void VirtualMachine::setHardware(std::shared_ptr<Hardware> value)
{
    m_Hardware = value;
    m_HardwareIsSet = true;
}
bool VirtualMachine::hardwareIsSet() const
{
    return m_HardwareIsSet;
}

void VirtualMachine::unsetHardware()
{
    m_HardwareIsSet = false;
}

std::shared_ptr<Location> VirtualMachine::getLocation() const
{
    return m_Location;
}


void VirtualMachine::setLocation(std::shared_ptr<Location> value)
{
    m_Location = value;
    m_LocationIsSet = true;
}
bool VirtualMachine::locationIsSet() const
{
    return m_LocationIsSet;
}

void VirtualMachine::unsetLocation()
{
    m_LocationIsSet = false;
}

utility::string_t VirtualMachine::getId() const
{
    return m_Id;
}


void VirtualMachine::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool VirtualMachine::idIsSet() const
{
    return m_IdIsSet;
}

void VirtualMachine::unsetId()
{
    m_IdIsSet = false;
}

std::vector<std::shared_ptr<IpAddress>>& VirtualMachine::getIpaddresses()
{
    return m_Ipaddresses;
}

void VirtualMachine::setIpaddresses(std::vector<std::shared_ptr<IpAddress>> value)
{
    m_Ipaddresses = value;
    m_IpaddressesIsSet = true;
}
bool VirtualMachine::ipaddressesIsSet() const
{
    return m_IpaddressesIsSet;
}

void VirtualMachine::unsetIpaddresses()
{
    m_IpaddressesIsSet = false;
}

std::shared_ptr<LoginCredential> VirtualMachine::getLogincredential() const
{
    return m_Logincredential;
}


void VirtualMachine::setLogincredential(std::shared_ptr<LoginCredential> value)
{
    m_Logincredential = value;
    m_LogincredentialIsSet = true;
}
bool VirtualMachine::logincredentialIsSet() const
{
    return m_LogincredentialIsSet;
}

void VirtualMachine::unsetLogincredential()
{
    m_LogincredentialIsSet = false;
}

}
}
}
}
}

