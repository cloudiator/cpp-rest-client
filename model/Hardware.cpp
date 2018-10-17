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



#include "Hardware.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

Hardware::Hardware()
{
    m_Id = utility::conversions::to_string_t("");
    m_Name = utility::conversions::to_string_t("");
    m_ProviderId = utility::conversions::to_string_t("");
    m_Cores = 0;
    m_Ram = 0L;
    m_Disk = 0.0;
    m_DiskIsSet = false;
    m_LocationIsSet = false;
}

Hardware::~Hardware()
{
}

void Hardware::validate()
{
    // TODO: implement validation
}

web::json::value Hardware::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    val[utility::conversions::to_string_t("providerId")] = ModelBase::toJson(m_ProviderId);
    val[utility::conversions::to_string_t("cores")] = ModelBase::toJson(m_Cores);
    val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(m_Ram);
    if(m_DiskIsSet)
    {
        val[utility::conversions::to_string_t("disk")] = ModelBase::toJson(m_Disk);
    }
    if(m_LocationIsSet)
    {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(m_Location);
    }

    return val;
}

void Hardware::fromJson(web::json::value& val)
{
    setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    setProviderId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("providerId")]));
    setCores(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("cores")]));
    setRam(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("ram")]));
    if(val.has_field(utility::conversions::to_string_t("disk")))
    {
        setDisk(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("disk")]));
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
}

void Hardware::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("providerId"), m_ProviderId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cores"), m_Cores));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ram"), m_Ram));
    if(m_DiskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("disk"), m_Disk));
    }
    if(m_LocationIsSet)
    {
        if (m_Location.get())
        {
            m_Location->toMultipart(multipart, utility::conversions::to_string_t("location."));
        }
        
    }
}

void Hardware::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    setProviderId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("providerId"))));
    setCores(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cores"))));
    setRam(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ram"))));
    if(multipart->hasContent(utility::conversions::to_string_t("disk")))
    {
        setDisk(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("disk"))));
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
}

utility::string_t Hardware::getId() const
{
    return m_Id;
}


void Hardware::setId(utility::string_t value)
{
    m_Id = value;
    
}
utility::string_t Hardware::getName() const
{
    return m_Name;
}


void Hardware::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t Hardware::getProviderId() const
{
    return m_ProviderId;
}


void Hardware::setProviderId(utility::string_t value)
{
    m_ProviderId = value;
    
}
int32_t Hardware::getCores() const
{
    return m_Cores;
}


void Hardware::setCores(int32_t value)
{
    m_Cores = value;
    
}
int64_t Hardware::getRam() const
{
    return m_Ram;
}


void Hardware::setRam(int64_t value)
{
    m_Ram = value;
    
}
double Hardware::getDisk() const
{
    return m_Disk;
}


void Hardware::setDisk(double value)
{
    m_Disk = value;
    m_DiskIsSet = true;
}
bool Hardware::diskIsSet() const
{
    return m_DiskIsSet;
}

void Hardware::unsetDisk()
{
    m_DiskIsSet = false;
}

std::shared_ptr<Location> Hardware::getLocation() const
{
    return m_Location;
}


void Hardware::setLocation(std::shared_ptr<Location> value)
{
    m_Location = value;
    m_LocationIsSet = true;
}
bool Hardware::locationIsSet() const
{
    return m_LocationIsSet;
}

void Hardware::unsetLocation()
{
    m_LocationIsSet = false;
}

}
}
}
}
}

