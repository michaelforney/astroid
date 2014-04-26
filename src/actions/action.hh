# pragma once

# include <glibmm.h>

# include "astroid.hh"
# include "proto.hh"

using namespace std;

namespace Astroid {
  class Action : public Glib::Object {
    public:
      Action (refptr<NotmuchThread>);

      refptr<NotmuchThread> thread;

      virtual bool doit () = 0;
      virtual bool undo () = 0;
      virtual bool undoable ();

  };
}