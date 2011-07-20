TEMPLATE = subdirs
SUBDIRS = batchrouter plugins

batchrouter.depends = plugins

plugins.file = plugins/routingdaemon_plugins.pro

