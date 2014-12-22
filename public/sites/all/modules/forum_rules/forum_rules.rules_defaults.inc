<?php
/**
 * @file
 * forum_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function forum_rules_default_rules_configuration() {
  $items = array();
  $items['rules_comment_authorisation'] = entity_import('rules_config', '{ "rules_comment_authorisation" : {
      "LABEL" : "Comment authorisation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Blog" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_wp_blog" : { "bundle" : "comment_node_wp_blog" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "Comment left on Blog",
            "message" : "There has been a comment left on the blog for you to authorise",
            "from" : "rik@creativitea.co.uk"
          }
        }
      ]
    }
  }');
  $items['rules_forum_report'] = entity_import('rules_config', '{ "rules_forum_report" : {
      "LABEL" : "Forum Report",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Forum" ],
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : { "ReportAbuse_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3", "5" : "5" } },
            "subject" : "Forum Abuse Reported",
            "message" : "Hi, unfortunately a comment or forum post has been reported by other members as being inappropriate.\\r\\n\\r\\nPlease check the post and judge for yourself and respond...\\r\\n\\r\\nURL: [site:current-page]\\r\\nReported by: [ReportAbuse:reported-by]\\r\\nReason: \\r\\n[ReportAbuse:reason]\\r\\n\\r\\n\\r\\n\\r\\n",
            "from" : "rik@creativitea.co.uk"
          }
        }
      ]
    }
  }');
  $items['rules_private_message_conclude'] = entity_import('rules_config', '{ "rules_private_message_conclude" : {
      "LABEL" : "Private Message Conclude",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Private Message" ],
      "REQUIRES" : [ "rules", "privatemsg_rules" ],
      "ON" : { "privatemsg_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "privatemsg-message:field-mark-as-resolved" ], "value" : 1 } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thanks for letting us know that this conversation was concluded. A message as been automatically sent to our administrators who may be in touch regarding the issue." } },
        { "mail" : {
            "to" : "web@creativitea.co.uk",
            "subject" : "Concluded Private Message",
            "message" : "Hi, this is an automated message to let you know a private conversation between users on the forum has been concluded.\\r\\n\\r\\n\\u003Cstrong\\u003EThis message has been concluded...\\u003C\\/strong\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003ESubject:\\u003C\\/strong\\u003E [privatemsg-message:subject]\\r\\n\\u003Cstrong\\u003EURL:\\u003C\\/strong\\u003E [privatemsg-message:url]\\r\\n\\u003Cstrong\\u003EAuthor:\\u003C\\/strong\\u003E [privatemsg-message:author]\\r\\n\\u003Cstrong\\u003EOriginal Message:\\u003C\\/strong\\u003E [privatemsg-message:original]\\r\\n\\r\\nMany thanks\\r\\n\\r\\nYour forum robot\\r\\n",
            "from" : "rik@creativitea.co.uk",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_register_user_notification'] = entity_import('rules_config', '{ "rules_register_user_notification" : {
      "LABEL" : "Register User Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Users" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : []
    }
  }');
  return $items;
}
