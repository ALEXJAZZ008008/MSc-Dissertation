foreach(dir libfreenect
            libfreenect2
            pcl
            SAvVy
            STIR
)
    add_subdirectory(${dir})
endforeach() 
