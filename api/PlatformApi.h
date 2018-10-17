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
 * PlatformApi.h
 *
 * 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_API_PlatformApi_H_
#define IO_GITHUB_CLOUDIATOR_REST_API_PlatformApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "NewPlatform.h"
#include "NewPlatformEnvironment.h"
#include "NewPlatformHardware.h"
#include "NewPlatformRuntime.h"
#include "Platform.h"
#include "PlatformEnvironment.h"
#include "PlatformHardware.h"
#include "PlatformRuntime.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace api {

using namespace io::github::cloudiator::rest::model;

class  PlatformApi
{
public:
    PlatformApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~PlatformApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new platform.
    /// </remarks>
    /// <param name="platform">Platform to add</param>
    pplx::task<std::shared_ptr<Platform>> addPlatform(
        std::shared_ptr<NewPlatform> platform
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new PlatformEnvironment 
    /// </remarks>
    /// <param name="platformEnvironment">PlatformEnvironment to be created </param>
    pplx::task<std::shared_ptr<PlatformEnvironment>> addPlatformEnvironment(
        std::shared_ptr<NewPlatformEnvironment> platformEnvironment
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new PlatformHardware 
    /// </remarks>
    /// <param name="platformHardware">PlatformHardware to be created </param>
    pplx::task<std::shared_ptr<PlatformHardware>> addPlatformHardware(
        std::shared_ptr<NewPlatformHardware> platformHardware
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new PlatformRuntime 
    /// </remarks>
    /// <param name="platformRuntime">PlatformRuntime to be created </param>
    pplx::task<std::shared_ptr<PlatformRuntime>> addPlatformRuntime(
        std::shared_ptr<NewPlatformRuntime> platformRuntime
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Deletes the platform identified by the given id paramater. 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<void> deletePlatform(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns the platform identified by the given id parameter 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<Platform>> findPlatform(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns the PlatformEnvironment identified by the id parameter. 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<PlatformEnvironment>> findPlatformEnvironment(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all platform environment  visible to the user 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<PlatformEnvironment>>> findPlatformEnvironments(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns the PlatformHardware identified by the id parameter. 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<PlatformHardware>> findPlatformHardware(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all platform hardware visible to the user 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<PlatformHardware>>> findPlatformHardwares(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns the PlatformRuntime identified by the id parameter. 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<PlatformRuntime>> findPlatformRuntime(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all platform runtime  visible to the user 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<PlatformRuntime>>> findPlatformRuntimes(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all platform from the system that the user has access to 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<Platform>>> findPlatforms(
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_API_PlatformApi_H_ */
