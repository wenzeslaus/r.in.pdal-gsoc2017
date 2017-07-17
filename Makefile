MODULE_TOPDIR = ../..

PGM = r.in.pdal

LIBES = $(RASTERLIB) $(GISLIB) $(MATHLIB) $(GPROJLIB) $(LASLIBS) $(SEGMENTLIB) $(VECTORLIB)
DEPENDENCIES = $(RASTERDEP) $(GISDEP) $(SEGMENTDEP) $(VECTORDEP)

EXTRA_INC = $(LASINC) $(VECT_INC) $(PROJINC) $(PDALINC)
EXTRA_CFLAGS = $(VECT_CFLAGS)  $(PDALCPPFLAGS) $(GDALCFLAGS)

include $(MODULE_TOPDIR)/include/Make/Module.make

LINK = $(CXX)

ifneq ($(strip $(CXX)),)
ifneq ($(USE_PDAL),)
default: cmd
endif
endif