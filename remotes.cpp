Remotes expand(Remotes a2c, LOs a2b) {
  return Remotes(expand(a2c.ranks, a2b, 1),
                 expand(a2c.idxs, a2b, 1));
}

Remotes unmap(LOs a2b, Remotes b2c) {
  return Remotes(unmap(a2b, b2c.ranks, 1),
                 unmap(a2b, b2c.idxs, 1));
}
