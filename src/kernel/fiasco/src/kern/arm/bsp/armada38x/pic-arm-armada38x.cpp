INTERFACE [arm && pic_gic && armada38x]:

#include "gic.h"
#include "initcalls.h"

// ------------------------------------------------------------------------
IMPLEMENTATION [arm && pic_gic && armada38x]:

#include "irq_mgr_multi_chip.h"
#include "kmem.h"

PUBLIC static FIASCO_INIT
void
Pic::init()
{
  typedef Irq_mgr_multi_chip<8> M;

  M *m = new Boot_object<M>(1);

  gic.construct(Kmem::mmio_remap(Mem_layout::Gic_cpu_phys_base),
                Kmem::mmio_remap(Mem_layout::Gic_dist_phys_base));
  m->add_chip(0, gic, gic->nr_irqs());

  Irq_mgr::mgr = m;
}

// ------------------------------------------------------------------------
IMPLEMENTATION [arm && pic_gic && mp && armada38x]:

PUBLIC static
void Pic::init_ap(Cpu_number, bool resume)
{
  gic->init_ap(resume);
}