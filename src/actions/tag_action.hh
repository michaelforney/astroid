# pragma once

using namespace std;

# include "proto.hh"
# include "action.hh"

namespace Astroid {
  class TagAction : public Action {
    public:
      TagAction (refptr<NotmuchThread>);

      TagAction (
          refptr<NotmuchThread>,
          const vector<ustring>,
          const vector<ustring>);

      vector<ustring> add;
      vector<ustring> remove;

      bool doit (Db *) override;
      bool undo (Db *) override;
      bool undoable () override;

  };

}
