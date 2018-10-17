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

/*
 * NodeProperties.h
 *
 * attributes defining a node
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_NodeProperties_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_NodeProperties_H_


#include "../ModelBase.h"

#include "GeoLocation.h"
#include "OperatingSystem.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// attributes defining a node
/// </summary>
class  NodeProperties
    : public ModelBase
{
public:
    NodeProperties();
    virtual ~NodeProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NodeProperties members

    /// <summary>
    /// 
    /// </summary>
    int32_t getNumberOfCores() const;
    bool numberOfCoresIsSet() const;
    void unsetNumberOfCores();
    void setNumberOfCores(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getMemory() const;
    bool memoryIsSet() const;
    void unsetMemory();
    void setMemory(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    float getDisk() const;
    bool diskIsSet() const;
    void unsetDisk();
    void setDisk(float value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OperatingSystem> getOperatingSystem() const;
    bool operatingSystemIsSet() const;
    void unsetOperatingSystem();
    void setOperatingSystem(std::shared_ptr<OperatingSystem> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GeoLocation> getGeoLocation() const;
    bool geoLocationIsSet() const;
    void unsetGeoLocation();
    void setGeoLocation(std::shared_ptr<GeoLocation> value);

protected:
    int32_t m_NumberOfCores;
    bool m_NumberOfCoresIsSet;
    int64_t m_Memory;
    bool m_MemoryIsSet;
    float m_Disk;
    bool m_DiskIsSet;
    std::shared_ptr<OperatingSystem> m_OperatingSystem;
    bool m_OperatingSystemIsSet;
    std::shared_ptr<GeoLocation> m_GeoLocation;
    bool m_GeoLocationIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_NodeProperties_H_ */