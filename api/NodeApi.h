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
 * NodeApi.h
 *
 * 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_API_NodeApi_H_
#define IO_GITHUB_CLOUDIATOR_REST_API_NodeApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "Node.h"
#include "NodeGroup.h"
#include "NodeRequirements.h"
#include "Queue.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace api {

using namespace io::github::cloudiator::rest::model;

class  NodeApi
{
public:
    NodeApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~NodeApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Registers an already existing node for usage
    /// </remarks>
    /// <param name="node">Node to be registered</param>
    pplx::task<std::shared_ptr<Node>> addBYON(
        std::shared_ptr<Node> node
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Create a new node request
    /// </remarks>
    /// <param name="nodeRequirements">Node Request</param>
    pplx::task<std::shared_ptr<Queue>> addNode(
        std::shared_ptr<NodeRequirements> nodeRequirements
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all node groups for the current user
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<NodeGroup>>> findNodeGroups(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all nodes the current user has access to
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<Node>>> findNodes(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieves the node with the given id.
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<Node>> getNode(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieves a node group, which groups multiple nodes that were create during one request
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<NodeGroup>> getNodeGroup(
        utility::string_t id
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_API_NodeApi_H_ */
