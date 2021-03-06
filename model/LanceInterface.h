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
 * LanceInterface.h
 *
 * Part of a task. Subtype of TaskInterface. 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_LanceInterface_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_LanceInterface_H_


#include <cpprest/details/basic_types.h>
#include "TaskInterface.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Part of a task. Subtype of TaskInterface. 
/// </summary>
class  LanceInterface
    : public TaskInterface
{
public:
    LanceInterface();
    virtual ~LanceInterface();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LanceInterface members

    /// <summary>
    /// The container type that lance should use. Can be DOCKER to force a docker deployment, NATIVE to force a plain container deployment or BOTH to let the system derive the container type. 
    /// </summary>
    utility::string_t getContainerType() const;
    bool containerTypeIsSet() const;
    void unsetContainerType();
    void setContainerType(utility::string_t value);
    /// <summary>
    /// Initialization action. 
    /// </summary>
    utility::string_t getInit() const;
    bool initIsSet() const;
    void unsetInit();
    void setInit(utility::string_t value);
    /// <summary>
    /// Executed before installation action. Can be e.g. used for downloading binaries. 
    /// </summary>
    utility::string_t getPreInstall() const;
    bool preInstallIsSet() const;
    void unsetPreInstall();
    void setPreInstall(utility::string_t value);
    /// <summary>
    /// Used for installing the application. 
    /// </summary>
    utility::string_t getInstall() const;
    bool installIsSet() const;
    void unsetInstall();
    void setInstall(utility::string_t value);
    /// <summary>
    /// Used for configuration of the application component. First action where Lance environment variables are set. 
    /// </summary>
    utility::string_t getPostInstall() const;
    bool postInstallIsSet() const;
    void unsetPostInstall();
    void setPostInstall(utility::string_t value);
    /// <summary>
    /// Called before starting the application. Can be e.g. used for configuration an environment. 
    /// </summary>
    utility::string_t getPreStart() const;
    bool preStartIsSet() const;
    void unsetPreStart();
    void setPreStart(utility::string_t value);
    /// <summary>
    /// Starts the component. Needs to return for PlainContainer and not return for Docker. 
    /// </summary>
    utility::string_t getStart() const;
    bool startIsSet() const;
    void unsetStart();
    void setStart(utility::string_t value);
    /// <summary>
    /// Detects the start of the application. Required if the application does not start instantianous. 
    /// </summary>
    utility::string_t getStartDetection() const;
    bool startDetectionIsSet() const;
    void unsetStartDetection();
    void setStartDetection(utility::string_t value);
    /// <summary>
    /// Checks if the application has stopped. Is periodically checked to detect a crash of the application. 
    /// </summary>
    utility::string_t getStopDetection() const;
    bool stopDetectionIsSet() const;
    void unsetStopDetection();
    void setStopDetection(utility::string_t value);
    /// <summary>
    /// Executed after the application has successfully started. 
    /// </summary>
    utility::string_t getPostStart() const;
    bool postStartIsSet() const;
    void unsetPostStart();
    void setPostStart(utility::string_t value);
    /// <summary>
    /// Called before the application is stopped. 
    /// </summary>
    utility::string_t getPreStop() const;
    bool preStopIsSet() const;
    void unsetPreStop();
    void setPreStop(utility::string_t value);
    /// <summary>
    /// Stops the application. 
    /// </summary>
    utility::string_t getStop() const;
    bool stopIsSet() const;
    void unsetStop();
    void setStop(utility::string_t value);
    /// <summary>
    /// Executed after the application is successfully stopped. 
    /// </summary>
    utility::string_t getPostStop() const;
    bool postStopIsSet() const;
    void unsetPostStop();
    void setPostStop(utility::string_t value);
    /// <summary>
    /// Executed before the container is shutdown. Can be used to backup state. 
    /// </summary>
    utility::string_t getShutdown() const;
    bool shutdownIsSet() const;
    void unsetShutdown();
    void setShutdown(utility::string_t value);

protected:
    utility::string_t m_ContainerType;
    bool m_ContainerTypeIsSet;
    utility::string_t m_Init;
    bool m_InitIsSet;
    utility::string_t m_PreInstall;
    bool m_PreInstallIsSet;
    utility::string_t m_Install;
    bool m_InstallIsSet;
    utility::string_t m_PostInstall;
    bool m_PostInstallIsSet;
    utility::string_t m_PreStart;
    bool m_PreStartIsSet;
    utility::string_t m_Start;
    bool m_StartIsSet;
    utility::string_t m_StartDetection;
    bool m_StartDetectionIsSet;
    utility::string_t m_StopDetection;
    bool m_StopDetectionIsSet;
    utility::string_t m_PostStart;
    bool m_PostStartIsSet;
    utility::string_t m_PreStop;
    bool m_PreStopIsSet;
    utility::string_t m_Stop;
    bool m_StopIsSet;
    utility::string_t m_PostStop;
    bool m_PostStopIsSet;
    utility::string_t m_Shutdown;
    bool m_ShutdownIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_LanceInterface_H_ */
