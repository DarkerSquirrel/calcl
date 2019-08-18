#ifndef CALCL_READ_HPP
#define CALCL_READ_HPP

namespace calcl {
  using namespace cidk;

  optional<Val> read_next(Cx &cx, Pos &pos, istream &in);
  void read(Cx &cx, Pos &pos, istream &in, Ops &out);
  Val read_group(Cx &cx, Pos &pos, istream &in);
}

#endif
