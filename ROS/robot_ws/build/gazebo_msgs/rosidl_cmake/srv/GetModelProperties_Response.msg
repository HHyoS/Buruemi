
string parent_model_name             # parent model
string canonical_body_name           # name of canonical link, link names are prefixed by model name, e.g. pr2::base_link
string[] body_names                  # list of links, link names are prefixed by model name, e.g. pr2::base_link
string[] geom_names                  # list of collisions
string[] joint_names                 # list of joints attached to the model
string[] child_model_names           # list of child models
bool is_static                       # returns true if model is static
bool success                         # return true if get successful
string status_message                # comments if available
